#include<iostream>
using namespace std;

//faktorial
int main(){
    
    int a;
    cin >> a;
    cout << a << "! = ";
    for (int e = a; e >= 1; e--){
        cout << e <<"*";
    }

    return 0;
}
