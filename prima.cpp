#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "masukkan N: "; cin >> N;

    bool prima = true;
    for (int i = 2; i <= N-1; i++) {
        if (N % i == 0) {
            prima = false;
            break;
        }
    }

    if (prima) {
        cout << N << " adalah bilangan prima" << endl;
    } else {
        cout << N << " bukan bilangan prima" << endl;
    }

    return 0;
}