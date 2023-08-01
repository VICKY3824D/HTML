#include<iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){

    //pointer
    int a;
    cout << "Masukkan nilai a = "; cin >> a;

    cout << " addres dari a " << &a << endl;
    cout << "   nilai dari a " << a << endl << endl;
    
    fungsi(a);
    kuadrat(a);

    cout << " addres dari a " << &a << endl;
    cout << "   nilai dari a " << a << endl;
    
    return 0;
}

void fungsi(int &b){
    b += 3;
    cout << " addres dari b " << &b << endl;
    cout << "   nilai dari b " << b << endl << endl;
}

void kuadrat(int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}
