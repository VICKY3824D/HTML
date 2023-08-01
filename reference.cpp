#include<iostream>
using namespace std;

int main() {

    // variabel
    int b = 10;
    cout << "addres dari a: " << &b << endl;
    cout << "   nilai dari a: " << b << endl << endl;
   
    // reference
    int &a = b;
    cout << "   nilai dari b: " << a << endl;
    cout << "addres dari b: " << &a << endl << endl;

    b = 7;
    cout << "nilai dari a: " << a << endl;
    cout << "nilai dari b: " << b << endl << endl;

    a = 9;
    cout << "nilai dari a: " << a << endl;
    cout << "nilai dari b: " << b << endl << endl;

    return 0;
}
