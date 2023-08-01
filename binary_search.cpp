#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

//! binary_search standard library algorithm dan array

const size_t arraySize = 5;
array<int, arraySize> angka;

void input_data(array<int, arraySize> &angka){
    for (int i = 0; i < arraySize; i++) {
        cout << "Masukkan data ke-" << (i+1) << " = ";
        cin >> angka[i];
    }
}

void cetak_data(array<int, arraySize> &angka){
    cout << "Data: ";
    for (int &a : angka){
        cout << a << " ";
    }
    cout << endl;
}

void cari_data(array<int, arraySize> &angka){
    int angkaCari;
    bool ketemu;
    for (int i = 1; i <= arraySize; i++){//ulangi pencarian sampai ke arraySize
        cout << "Angka yang dicari = ";
        cin >> angkaCari;

        sort(angka.begin(), angka.end());// sorting dahulu jika binary_search
        ketemu = binary_search(angka.begin(), angka.end(), angkaCari); // search => binary_search

        if (ketemu) {
            cout << "'" << angkaCari << "' ditemukan di";
            for(int j = 0; j < arraySize; j++){ //ditemukan di index ke
                if(angkaCari == angka[j]){
                    cout << "index ke-" << (j+1) << endl;
                }
            }
        } else {
            cout << "Angka '" << angkaCari << "' tidak ditemukan" << endl;
        }
        cout << endl;
    }
}

int main(){

    cout << "### PROGRAM MENCARI DATA ###" << endl;
    cout << "============================" << endl;
    input_data(angka);
    cout << "============================" << endl;
    cetak_data(angka);
    cout << "============================" << endl;
    cari_data(angka);
    
    return 0;
}
