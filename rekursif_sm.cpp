#include<iostream>
using namespace std;

int rekursif(int n){
    if(n==0) return 2;
    else if(n % 2 == 1) return 2 * (rekursif(n-1));
    else return rekursif(n/2) * rekursif(n/2);
}

int main(){

    cout << rekursif(7) << endl;
    return 0;
}