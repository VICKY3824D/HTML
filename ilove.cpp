#include<iostream>
using namespace std;

int main(){
    
    int a[5];
    int jumlah = 0;
    
    cout << "Memasukkan nilai kedalam arry" << endl;
    for(int i= 0; i < 5; i++){
        cout << "a[" << i+1 << "] : ";
        cin >> a[i];
        jumlah += a[i];
    }
    
    cout << "\nData yang dimasukkan\t: ";
    for(int j = 0; j < 5; j++){
        cout << a[j] << " ";
    }
    
    cout << "\nJumlah total\t\t: " << jumlah;

    return 0;
}