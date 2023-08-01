#include<iostream>
#include<iomanip>
using namespace std;

const int N = 5;
typedef int array[];

//mendefinisikan fungsi dengan paramaeter bertipe array;
void cetakArray(array var) {
    for (int i = 0; i < N; i++) {
        cout << var[i] << " ";
    }
    cout << endl;
}

double hitungRataRata(array var) {
    int jumlah = 0;
    for (int i = 0; i < N; i++) {
        jumlah += var[i];
    }
    return (double) jumlah / N;
}


int main() {

    array a = {1, 2, 3, 4, 5};
    
    //menampilkan elemen array a
    cout << "isi array a\t: "; cetakArray(a);
    
    //menampilakn nilai rata-rata
    cout << fixed;
    cout << "Rata-rata\t: ";
    cout << hitungRataRata(a) << endl;
    
    return 0;
}
