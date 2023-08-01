#include<iostream>
using namespace std;

int main(){

    int a=12, b=7, c=0;

    while (b > 0){
       c = c + a;
       b = b - 1;
    }
    cout << c << endl;
    return 0;
}
