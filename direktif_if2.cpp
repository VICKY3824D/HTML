#include<iostream>
using namespace std;

int main(){

    #if _WIN32 || _WIN64
        #if _WIN64
            #define ENV "Windows 64-bit"
        #else
            #define ENV "Windows 32-bit"
        #endif
    #endif

    #if _GNUC64
        #if __x86_64__ || __ppc64__
            #define ENV "Linux 64-bit"
        #else
            #define ENV "Linux 32-bit"
        #endif
    #endif

    cout << "Program ini dikompilasi di " << ENV << endl;

    return 0;
}