from setuptools import setup, Extension
from pybind11.setup_helpers import Pybind11Extension, build_ext
from torch.utils.cpp_extension import BuildExtension, CppExtension, CUDAExtension
from glob import glob

# ext_modules = [
#     Pybind11Extension(
#         "gpu_library",
#         sorted(glob("src/*.cpp")+glob("src/*.cu"))
#     )
# ]
ext_modules = [
    CUDAExtension(
        name='gpu_library',
        sources=sorted(glob("src/*.cpp")+glob("src/*.cu")),
        extra_compile_args={'cxx': ['-g'],
                            'nvcc': ['-O2']})]


setup(name="gpu_library",
    cmdclass={"build_ext": BuildExtension},
    ext_modules=ext_modules)