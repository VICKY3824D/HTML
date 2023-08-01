#include<bits/stdc++.h>
using namespace std;

int x, y;

void xyz(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
    x = x + 10;
}

int main() {
    x = 10;
    y = 5;
    xyz(x, y);
    cout << x; 
    
    return 0;
}
