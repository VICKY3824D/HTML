#include<iostream>
#include<fstream>

//! SALAH
using namespace std;

int main(){

    fstream outfile;
    std::string str("whatever");
    size_t size=str.size();
    outfile.write(reinterpret_cast<char*>(&size),sizeof(size));
    outfile.write(&str[0],size);
    outfile.close();
    

    return 0;
}

