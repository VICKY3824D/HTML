#include<iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main() {
    
   
    int a = 5;
    cout << "addres dari a " << &a << endl;
    cout << "   nilai dari a " << a << endl;

    //fungsi(&a); //fungsi dengan input pointer
    kuadrat(&a);

    cout << "   nilai dari a " << a << endl;
    return 0;
}

void fungsi(int *b){
    cout << "addres dari b " << b << endl;
    cout << "   nilai dari b " << *b << endl; // dereferencing
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}