#include<iostream>
using namespace std;

int A, B, C;

int main(){
    cin >> A >> B >> C;
    A = B;
    B = C;
    C = A;
    cout << A + B + C << endl;
    return 0;
}

