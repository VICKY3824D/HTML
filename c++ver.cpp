#include<iostream>
using namespace std;

int main(){
    
    #ifdef __cplusplus

        cout << "Nilai __cplusplus sebelum diubah: ";
        cout << __cplusplus << endl;

        #undef __cplusplus

        #define __cplusplus "C++17"

        cout << "Nilai __cplusplus setelah diubah: ";
        cout << __cplusplus << endl;

    #endif
    return 0;
}