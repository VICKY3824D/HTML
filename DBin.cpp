#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    fstream myFile;
    int nama = 110904;
    myFile.open("databin.bin", ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&nama),sizeof(nama));
    myFile.close();
    return 0;
}
