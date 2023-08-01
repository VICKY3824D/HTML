#include<iostream>
using namespace std;

int main() {

    int jml_index, maks, minim, nilai;
    cout << "Banyak data = "; cin >> jml_index;
    cout << "========================"<< endl;//pemanis

    for (int a = 1; a <= jml_index; a++) {
        cout << "Masukkan Data ke-" << a << " = ";
        cin >> nilai;
        if (a == 1) {
            minim = nilai;
            maks = nilai;
        } else {
            if (nilai > maks) {
                maks = nilai;
            }
            if (nilai < minim) {
                minim = nilai;
            }
        }
    }

    cout << "========================"<< endl;//penamis
    cout << "Nilai Maksimal = " << maks << endl;
    cout << "Nilai Minimal  = " << minim << endl << endl;
    
    return 0;
}
