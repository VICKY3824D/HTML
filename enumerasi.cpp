#include<iostream>
using namespace std; 

enum hari{
    Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu
};

int main(){
    
    hari sekarang, jadwal;
    sekarang = Senin;
    jadwal = Rabu;

    int selisih = jadwal-sekarang;
    if (sekarang < jadwal) {
        cout << "Jadwal adalah " << selisih << " hari lagi" << endl;
    } else if (sekarang > jadwal) {
        cout << "Jadwal adalah " << selisih * (-1) << " hari yang lalu" << endl;
    } else {
        cout << "Jadwal adalah hari ini" << endl;
    }

    return 0;
}