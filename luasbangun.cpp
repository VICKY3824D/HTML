#include <iostream>
using namespace std;

void luas_segitiga(){
    cout << "1. Menghitung luas segitiga" << endl;
    int alas, tinggi;
    float luas_sgt;
    cout << "   Masukkan alas = "; cin >> alas;
    cout << "   Masukkan tinggi = "; cin >> tinggi;
    luas_sgt = 0.5 * alas * tinggi;//rumus luas segitiga
    cout << "   Luas Segitiga = " << luas_sgt << endl << endl;
}

void luas_persegi_panjang(){
    cout << "2. Menghitung luas persegi panjang" << endl;
    int panjang, lebar;
    int luas_psg;
    cout << "   Masukkan panjang = "; cin >> panjang;
    cout << "   Masukkan lebar = "; cin >> lebar;
    luas_psg = panjang * lebar;//rumus luas persegi
    cout << "   Luas Persegi Panjang = " << luas_psg << endl << endl;
}

void luas_lingkaran(){
    cout << "3. Menghitung luas lingkaran" << endl;
    int jari2;
    float luas_ling;
    cout << "   Masukkan jari-jari = "; cin >> jari2;
    luas_ling = 3.14 * jari2 * jari2;//rumus luas lingkaran
    cout << "   Luas lingkaran = " << luas_ling << endl << endl;
}

void luas_trapesium(){
    cout << "4. Menghitung luas trapesium" << endl;
    int a, b, t;
    float luas_trp;
    cout << "   Masukkan a = "; cin >> a;
    cout << "   Masukkan b = "; cin >> b;
    cout << "   Masukkan tinggi = "; cin >> t;
    luas_trp = 0.5 * (a+b) * t;//rumus luas trapesium
    cout << "   Luas Trapesium = " << luas_trp << endl << endl;
}

void luas_ketupat(){
    cout << "5. Menghitung luas belah ketupat" << endl;
    int d1, d2;
    float luas_ktp;
    cout << "   Masukkan panjang diagonal 1 = "; cin >> d1;
    cout << "   Masukkan panjang diagonal 2 = "; cin >> d2;
    luas_ktp = 0.5 * d1 * d2;//rumus luas belah ketupat
    cout << "   Luas belah ketupat = " << luas_ktp << endl << endl;
}

int main(){

    cout << "Program perhitungan luas dan volume \n\n1. Luas segitiga\n2. Luas Persegi\n3. Luas Lingkaran\n";
    cout << "4. Menghitung luas trapesium\n5. Menghitung luas belah ketupat\n\nTekan tombol selain 1 2 3 4 5 untuk keluar dari program\n\n" ;
    
    for ( ; ;/*int i = 1; i <= 4; i++*/) {
        int x;
        cout << "Gunakan nomor berapa: "; cin >> x;
        if(x == 1){
            luas_segitiga();
        } else if (x == 2){
            luas_persegi_panjang();
        } else if(x == 3){
            luas_lingkaran();
        } else if(x == 4){
            luas_trapesium();
        } else if(x == 5){
            luas_ketupat();
        } else {
            break;
        }
    }
    return 0;
}