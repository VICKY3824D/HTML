#include <iostream>
#include<cmath>
using namespace std;

//perlu perbaikan 
int wik[] = {0,2,3,5,7,11,13,17,19};

int arr1(int x, int y){

    for (int g = 1; g <= 5; g++) {
        swap(wik[x], wik[y]);
             for (int i = 0; i <= 8; i++) {
                  cout << wik[i] << " ";
            }
            cout << endl;
    }
}

int arr2(int c){
    cout << pow(wik[c], 2) << endl;
}

int main(){

    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    arr1(a, b);
    cout << endl;
    arr2(a);

    return 0;
}