#include <iostream>
using namespace std;

int main() {
    
    int m, n;
    cout << "Masukkan nilai m = "; cin >> m;
    cout << "Masukkan nilai n = "; cin >> n;
    
    for(int i = 1; i <= m; i++){
        for(int j = i; j <= n; j++){
            cout << i << " x " << j << "\t= ";
            cout << i*j << " " << endl;
        }
        cout << endl;
    }
    
    return 0;
}
