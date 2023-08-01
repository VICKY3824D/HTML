#include<iostream>
using namespace std;

int main(){

    int x, y;
    cout << "\n# nesting repetition #" << endl;
    cout << "=========================" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "k = 1\nk = k + i + j" << endl;
    cout << "Hasilnya: "<< endl ;
    int k = 1;//base k=1
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            cout << k;//keluarkan k sebelum update nilai
            k = k + i + j;//tambahkan i,j,k
            cout << "+" << i << "+" << j << "=" << k <<  "     "; 
        }
        cout << endl;//enter program i
    }

    return 0;
}