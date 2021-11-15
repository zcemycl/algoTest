#include "tenthLine.h"

string tenthLine::naive(){
    string curPath = fs::current_path();
    curPath = curPath.substr(0,curPath.find("build"));
    ifstream myfile (curPath+"src/TenthLine/file.txt");
    string line; int i=0;
    
    if (myfile.is_open()){
        while ( getline (myfile,line) ){
            if (i==9) return line;
            i+=1;
        }
        myfile.close();
    } else cout << "Unable to open file"; 

    return "";
}

string tenthLine::linuxCMD(){
    string curPath = fs::current_path();
    curPath = curPath.substr(0,curPath.find("build"));
    string cmd = "sed -n '10p' < "+curPath+
        "src/TenthLine/file.txt";
    string data; FILE * stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.c_str(), "r");
    if (stream) {
        while (!feof(stream))
        if (fgets(buffer, max_buffer, stream) != NULL) data.append(buffer);
        pclose(stream);
    }
    cout<<data<<endl;
    return data;
}
