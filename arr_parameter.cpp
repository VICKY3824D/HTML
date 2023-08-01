#include<iostream>
#include<iomanip>
using namespace std;

const int N = 5;
typedef int Array[N];

//!mendefinisikan fungsi dengan paramaeter bertipe array
void cetakArray(Array var){
    for (int i = 0; i < N; i++) {
        cout << var[i] << " ";
    }
    cout << endl;
}

//!fungsi untuk menghitung rata rata variabel 
double hitungRataRata(Array var) {
    int jumlah = 0;
    for (int i = 0; i < N; i++) {
        jumlah += var[i];
    }
    return (double) jumlah / N;
}

int main(){

    Array a, b, c, d;

    //!mengisi nilai ke dalam array a, b, c, dan d
    for (int i = 0; i < N; i++) {
        a[i] = i + 1; 
        b[i] = (i + 1) * 10;  
        c[i] = (i + 1) * 100; 
        d[i] = (i + 1) * 1000;
    }
    
    //menampilkan elemen array a
    cout << "isi array a\t: "; 
    cetakArray(a);
    //menampilakn nilai rata-rata
    cout << fixed;
    cout << "Rata-rata\t: ";
    cout << hitungRataRata(a);
    cout << endl << endl;

    //menampilkan elemen array b
    cout << "isi array b\t: "; 
    cetakArray(b);
    //menampilakn nilai rata-rata
    cout << fixed;
    cout << "Rata-rata\t: ";
    cout << hitungRataRata(b);
    cout << endl << endl;

    //menampilkan elemen array c 
    cout << "isi array c\t: "; 
    cetakArray(c);
    //menampilakn nilai rata-rata
    cout << fixed;
    cout << "Rata-rata\t: ";
    cout << hitungRataRata(c);
    cout << endl << endl;

    //menampilkan elemen array d
    cout << "isi array d\t: "; 
    cetakArray(d);
    //menampilakn nilai rata-rata
    cout << fixed;
    cout << "Rata-rata\t: ";
    cout << hitungRataRata(a);
    cout << endl << endl;
    return 0;
}
