#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
// #if __has_include(<filesystem>)
//   #include <filesystem>
//   namespace fs = std::filesystem;
#if __has_include(<experimental/filesystem>)
  #include <experimental/filesystem> 
  namespace fs = std::experimental::filesystem;
#else
  error "Missing the <filesystem> header."
#endif

using namespace std;

class tenthLine{
    public:
        static string naive();
        static string linuxCMD();
};
