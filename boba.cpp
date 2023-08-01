#include <iostream>
using namespace std;

int toko(int z){
    return 2*z+1;
}

int cup(int y){
    if(y < 0){
        return 2;
    } else {
        return cup(y-1) + toko(y);
    }
}

int boba(int x){
    if(x % 2 == 0){
        return cup(x*3);
    } else {
        return cup(x*5);
    }
}

int main() {
    
    int z;
    cout << "masukkan z: "; cin >> z;
    for (int i = 0; i <= z; i++) {
        cout << "boba ke-" << i << " = " << boba(i) << endl;
    }
    
    return 0;
}