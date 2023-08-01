#include <iostream>
using namespace std;

bool prima(int n){
    int i, j;
    if(n*n==n){
        return false;
        exit;
    } 
    for(i = 2; i < n; i++){
        j = 1;
        while(j*i <= n){
            if(j*i == n) {
                return false;
                exit;
            }
            j++;
        }
    }
    return true;
}

int cariPrima(int x){
    int i, b = 0;
    for(i = 0; i <= x; i++){
        if(prima(i)==true){
            b++;
        }
    }
    return b;
}

int main() {
    
    cout << "Bilangan prima < 1000 = "<< cariPrima(1000);

    return 0;
}
