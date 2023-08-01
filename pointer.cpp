#include<iostream>
using namespace std;

int main(){
    
    int a = 5;

    //pointer
    int *aPtr = &a;

    // int a mempunyai nilai dan addres (alamat)
    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl;

    //dereferencing, mengambil nilai dari sebuah pointer
    a = 10;
    cout << "mengambil nilai dari pointer aPtr: " << *aPtr << endl;

    return 0;
}