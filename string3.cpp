#include<iostream>
using namespace std;

const string  hari[]{
    "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"
};

int main(){

    for (auto a : hari) {
        cout << a << endl << endl;
    }
    
    return 0;
}
