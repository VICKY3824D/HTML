#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int i;
    /*  mencari luas segitiga
    dengan rumus 1/2 x alas x tinggi */
    
    cout << "Alas: ";
    cin >> x;
    cout << "tinggi: ";
    cin >> y;

    i = 0.5 * x * y;
    cout << i;

    return 0;
}

