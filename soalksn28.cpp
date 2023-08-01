#include<iostream>
using namespace std;

int f(int x, int y){
    if (x == 0 || y == 0){
        return 1;
    }
    else{
        return f(x-1, y) + f(x, y-1);
    }
}
int g(int x, int y){
    if (x == 0){
        return 1;
    }
    else{
        return g(x-1, y) + f(x, y);
    }
}
int main(){

    cout << "28. Nilai f(9,5) = " << f(9,5) << endl;
    cout << "29. Nilai g(10,5) = " <<  g(10,5) << endl;
    return 0;
}