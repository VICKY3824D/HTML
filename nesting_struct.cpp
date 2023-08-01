#include <iostream>
#include <string>
using namespace std;

struct guru{
  string nama;
  string gender;
  int usia;
};

struct mapel{
    string nama_mapel;
    double kkm;
    string status;
    
    //memanggil struct guru
    guru guru1, guru2, guru3, guru4;
};

int main() {
    
    guru guru1, guru2, guru3,guru4;
    mapel mapel1, mapel2, mapel3, mapel4;
    
    guru1.nama = "Malik";
    guru1.usia =  30;
    
    guru2.nama = "Ridwan";
    guru2.usia = 25;
    
    guru3.nama = "Yunus";
    guru3.usia = 32;

    guru4.nama = "Adam";
    guru4.usia = 44;
    
    mapel1.guru1 = guru1;
    mapel2.guru2 = guru2;
    mapel3.guru3 = guru3;
    mapel4.guru4 = guru4;
    
    mapel1.nama_mapel = "Matematika";
    mapel1.kkm = 80;
    mapel1.status = "wajib";
    
    mapel2.nama_mapel = "Fisika";
    mapel2.kkm = 75;
    mapel2.status = "wajib";
    
    mapel3.nama_mapel = "Biologi";
    mapel3.kkm = 70;
    mapel3.status = "peminatan";

    mapel4.nama_mapel = "Kimia";
    mapel4.kkm = 65;
    mapel4.status = "peminatan";
    
    cout << "Nama mapel\t = "<< mapel1.nama_mapel << endl;
    cout << "KKM mapel\t = " << mapel1.kkm << endl;
    cout << "Nama guru\t = " << mapel1.guru1.nama << endl;
    cout << "Usia guru\t = " << mapel1.guru1.usia << endl;
    
    cout << "==========================" << endl;
    
    cout << "Nama mapel\t = "<< mapel2.nama_mapel << endl;
    cout << "KKM mapel\t = " << mapel2.kkm << endl;
    cout << "Nama guru\t = " << mapel2.guru2.nama << endl;
    cout << "Usia guru\t = " << mapel2.guru2.usia << endl;
    
    cout << "==========================" << endl;
    
    cout << "Nama mapel\t = "<< mapel3.nama_mapel << endl;
    cout << "KKM mapel\t = " << mapel3.kkm << endl;
    cout << "Nama guru\t = " << mapel3.guru3.nama << endl;
    cout << "Usia guru\t = " << mapel3.guru3.usia << endl;

    cout << "==========================" << endl;

    cout << "Nama mapel\t = "<< mapel4.nama_mapel << endl;
    cout << "KKM mapel\t = " << mapel4.kkm << endl;
    cout << "Nama guru\t = " << mapel4.guru4.nama << endl;
    cout << "Usia guru\t = " << mapel4.guru4.usia << endl;

    return 0;
}