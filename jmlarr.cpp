#include <iostream>
using namespace std;

int main() {
    
    int jml_item;
    cout << "\nJumlah item = "; cin >> jml_item;
    int harga[jml_item];
    int total = 0;
    cout << "======================" << endl; 
    
    for(int j = 1; j <= jml_item; j++) {
        cout << "Harga item ke-" << j << " = ";
        cin >> harga[j-1]; //memasukkan harga item
        total = total + harga[j-1]; //menjumlahkan total harga item
    }
    
    cout << "======================" << endl;
    cout << "Total harga = Rp." << total << endl << endl;
    
    return 0;
}