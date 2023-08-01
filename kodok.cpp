#include <iostream>
using namespace std;

int g(int v){
    int kodok = 0;
    for(int i = 1; i <= v; i++){
        kodok = kodok * 2 + 1;
    }
    return kodok;
}

void tampilakn_g(int v){
    cout << "nilai kodok(" << v << ") = " << g(v) << endl;
} 

int main() {
    
    int v;

    cout << "masukkan nilai v: "; cin >> v;
    tampilakn_g(v);

    return 0;
}