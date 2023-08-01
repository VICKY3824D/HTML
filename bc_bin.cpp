#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    fstream myFile;
    int hasil;
    myFile.open("databin.bin", ios::in | ios::binary);
    
    // untuk menjadikan data ke dalam bentuk biner
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    cout << hasil << endl;
    return 0;
}

