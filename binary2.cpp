#include<iostream>
#include<fstream>

//! SALAH
using namespace std;

int main() {

    fstream infile;
    std::string str;
    size_t size = str.size();
    infile.read(reinterpret_cast<char*>(&size), sizeof(size));
    str.resize(size);
    infile.read(&str[0], size);
    string string = "whatever";
    if (string == str) {
        cout << "Cocok" <<endl;
    } else {
        cout << "Tidak Cocok" <<endl;
    }
    infile.close();
    

    return 0;
}
