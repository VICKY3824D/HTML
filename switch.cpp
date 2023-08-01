#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
    
    int noHari;
    string namaHari;

    cout << "Masukkan nomor hari: ";
    cin >> noHari;

    switch (noHari) {
    case 1:
        namaHari = "Minggu";
        break;
    case 2:
        namaHari = "Senin";
        break;   
    case 3:
        namaHari = "Selasa";
        break;
    case 4:
        namaHari = "Rabu";
        break;
    case 5:
        namaHari = "Kamis";
        break;
    case 6:
        namaHari = "Jum'at";
        break;
    case 7:
        namaHari = "Sabtu";
        break;

    default:{
            cout << "Tidak ada hari ke-" << noHari << endl;
            exit(1);
        }

    }

    cout << "Nama hari ke-" << noHari << " adalah " << namaHari << endl;
    return 0;
}


