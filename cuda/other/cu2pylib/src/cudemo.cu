#include "cudemo.cuh"
#include <cstdio>
#include "cuda_runtime.h"
#include "device_launch_parameters.h"

// define a helper function for checking CUDA errors. See this thread: https://stackoverflow.com/questions/14038589/what-is-the-canonical-way-to-check-for-errors-using-the-cuda-runtime-api
#define cudaErrchk(ans) { GPUAssert((ans), __FILE__, __LINE__); }
inline void GPUAssert(cudaError_t code, const char *file, int line, bool abort=true){
	if (code != cudaSuccess)
	{
		fprintf(stderr,"GPUassert: %s %s %d\n", cudaGetErrorString(code), file, line);
		if (abort) exit(code);
	}
}

namespace pycudemo {

    __global__ void add_d(int *a_d,int *b_d,int *c_d){
        if (threadIdx.x==0)
            *c_d = *a_d + *b_d;
    }

    __host__ int add(int a,int b){
        int byte_size = sizeof(int);
        int *a_d,*b_d,*c_d, result;

        cudaErrchk(cudaMalloc(&a_d,byte_size));
        cudaErrchk(cudaMalloc(&b_d,byte_size));
        cudaErrchk(cudaMalloc(&c_d,byte_size));

        cudaErrchk(cudaMemcpy(a_d, &a, byte_size, cudaMemcpyHostToDevice));
        cudaErrchk(cudaMemcpy(b_d, &b, byte_size, cudaMemcpyHostToDevice));

        add_d<<<1,1>>>(a_d,b_d,c_d);
        cudaErrchk(cudaMemcpy(&result,c_d,byte_size,cudaMemcpyDeviceToHost));


        return result;
    }



}