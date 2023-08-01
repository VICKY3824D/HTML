#include<iostream>
using namespace std;

int faktorial(int x){
    if(x<=1)return 1;
    else {
        return x*faktorial(x-1);
    }
}

int main(){
    
    int n, r, kombinasi, permutasi;
    cout << "Masukkan n: "; cin >> n;
    cout << "Masukkan r: "; cin >> r;
    kombinasi = faktorial(n)/(faktorial(r)*faktorial(n-r));
    permutasi = faktorial(n)/faktorial(n-r);
    cout << kombinasi << endl;
    
    return 0;
}