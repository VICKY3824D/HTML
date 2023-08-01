#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
    cout << "Array : ";
    for(auto &a : angka){
        cout << a << " ";
    }
    cout << endl;
}

void printArray(array <char, arraySize> &angka){
    cout << "Array : ";
    for(auto &a : angka){
       cout << a << " ";
    }
    cout << endl;
}

int main() {

    array <int, arraySize> angka = {1,3,5,7,9,0,8,6,4,2};
    array <char, arraySize> huruf = {'c','h','g','e','i','j','d','f','b','a'};

    cout << "Sebelum diurutkan:" << endl;
    printArray(angka);
    printArray(huruf);

    cout << endl;

    cout << "Setelah diurutkan:" << endl;
    sort(angka.begin(), angka.end());
    printArray(angka);

    sort(huruf.begin(), huruf.end());
    printArray(huruf);

    return 0;
}
