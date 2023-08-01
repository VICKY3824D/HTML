#include<iostream>
using namespace std;

void function1(int &j){
    cout << "nilai dari j =  " << j << endl;
    cout << "addres dari j =  " << &j << endl;
}
void function2(int &k){
    cout << "nilai dari k =  " << k << endl;
    cout << "addres dari k =  " << &k << endl;
}

int main(){

    system("cls");
    int a;
    cout << "Masukkan a : ";cin >> a;
    cout << "nilai dari a =  " << a << endl;
    cout << "addres dari a =  " << &a << endl;
    function1(a);
    function2(a);
    return 0;
}
