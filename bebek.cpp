#include <iostream>
using namespace std;

int j(int x, int y, int z){
   int bebek = 1;
   for (int i = 1; i <= x; i++) {
       for (int j = 1; j <= y; j++) {
          for (int k = 1; k <= z; k++) {
              bebek = bebek + i + j + k;
          } 
       }
   }
   return bebek;
}

void tampilakn_j(int x, int y, int z){
    cout << "nilai j(" << x << "," << y << "," << z << "," << ") = " << j(x,y,z) << endl;
}

int main() {
    
    int x, y, z;

    cout << "masukkan nilai x: "; cin >> x;
    cout << "masukkan nilai y: "; cin >> y;
    cout << "masukkan nilai z: "; cin >> z;
    cout << "hasilnya: " << endl;
    tampilakn_j(x, y, z);
    return 0;
}