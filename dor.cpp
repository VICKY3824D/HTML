#include<iostream>
using namespace std;

int main() {
    
    //masih perlu perbaikan
    int j = 0;
    for (int i = 1; i < 500; i++) {
        if (i % 10 == 8) {
            j++;
        } else if (i % 100 > 79) {
            if (i % 100 == 88) {
                j--;
            } else if(i % 100 < 90){
                j++;
            }
        }
    }

    j--;
    cout << j << endl;
    return 0;
}
