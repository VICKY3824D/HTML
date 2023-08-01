#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "\nMasukkan Pola:";
    cin >> n;

    // Segitiga siku-siku di bawah kiri
    for(int i=1; i <= n; i++){//pola ke bawah
        for(int j=1; j<=i; j++){//pola ke samping
            cout << " o ";
        }
        cout << endl;
    }
   
    cin.get();
    return 0;
}
