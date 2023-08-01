#include <iostream>
using namespace std;

int main() {
    
    string huruf = "umak apais uat uka ekayak";
    
    for(size_t i {0}, j {huruf.length()-1}; i<j; i++, j--){
        swap(huruf[i], huruf[j]);
    }
    cout << huruf << endl;

    return 0;
}