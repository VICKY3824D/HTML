#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "masukkan nilai n : "; cin >> n;
    
    cout << endl;
    
    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n-1 ||j == 1||j==n){
                cout << " *";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}