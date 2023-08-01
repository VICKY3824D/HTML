#include<iostream>
using namespace std;

int main(){
    
    int jml_index;
    cout << "Jumlah data = "; cin >> jml_index;
    cout << "===============" << endl;
    float nilai[jml_index], total = 0, rerata;

    for (int i = 1; i <= jml_index; i++) {
        cout << "Nilai ke-" << i << " = ";
        cin >> nilai[i-1];
        total += nilai[i-1];
    }

    cout << "===============" << endl;
    cout << "Total nilai = " << total << endl;
    rerata = total/jml_index;
    cout << "Rata-rata nilai = " << rerata << endl;

    return 0;
}
