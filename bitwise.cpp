#include<iostream>
#include<bitset>

using namespace std;

int main() {
    
    unsigned short a = 12;
    unsigned short b = 7;
    unsigned short d;
    unsigned short c;
    c = a >> 1;
    d = a | b;
    
    cout << "a = " << a << "\t=> " << bitset<8>(a) << endl;
    //cout << "b = " << b << "\t=> " << bitset<8>(b) << endl;
    //cout << "d = " << d << "\t=> " << bitset<8>(d)  << endl;
    cout << "c = " << c << "\t=> " << bitset<8>(c)  << endl;
    
    return 0;
}
