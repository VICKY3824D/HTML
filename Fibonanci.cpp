#include <iostream>
using namespace std;

int fib(int n){
    if(n==1)return 0;
    else if(n==2)return 1;
    else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    
    int n;
    cout << "Fibonanci  : "; cin >> n;

    for(int i = 1; i <= n; i++){
        if(i < n){
            if(i==1){
                continue;
            }
            cout << fib(i) << ",";
        }
        else {
            cout << fib(i);
        }
    }

    return 0;
}