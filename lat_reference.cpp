#include<iostream>
using namespace std;

void kwik(int &);
void kwak(int &);

int main(){

    int a = 9;
    cout << "addres a awal: " << &a << endl;
    cout << "nilai a awal: " << a << endl << endl;

    kwik(a);
    kwak(a);
    cout << "kuadrat dari a: " << a << endl;
    return 0;
}

void kwik(int &cwik){
    cwik = 11;
    cout << "nilai mwik: " << cwik << endl;
    cout << "addres mwik: " << &cwik << endl << endl;
}

void kwak(int &mwak){
    mwak = mwak * mwak;
}
