#include <iostream>
#include <iterator>
#include <boost/program_options.hpp>
#include <exception>
#include <string>
#include <vector>

namespace po = boost::program_options;
using namespace std;

int main(int argc,char** argv){
    po::options_description desc("Instructions for this program");

    desc.add_options()
        ("help,h","Display help message.")
        ("version,v","Version number: 0.0")
        ("input-files", po::value<std::vector<std::string>>(), "Input files")
        ("compression,c",po::value<int>()->default_value(5)->implicit_value(10),
            "Compression level");
    po::positional_options_description p;
    p.add("input-files", -1);
    po::variables_map vm;
    po::store(po::command_line_parser(argc,argv).options(desc).run(),vm);
    po::notify(vm);

    if(vm.count("help")){
        cout << desc;
        return 0;
    }

    // if(vm.count("version")){
    //     std::cout << vm["version"];
    //     return 0;
    // }
    if(vm.count("input-files")){
        vector<string> files = vm["input-files"].as<vector<string>>();
        for(string file : files){
            cout << "Input file " << file << endl;
        }
    }

    if(vm.count("compression")){
        cout << "Compression level "<<vm["compression"].as<int>()<<endl;
    }

    return 0;
}