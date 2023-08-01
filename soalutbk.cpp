#include <iostream>
using namespace std;

//mencari suku ke-20 dari 3,8,15,24,...

int main() {
    
    int Sn_tkt2 = 0, a_tkt1=3, a_tkt2=5-2;
    
    for(int j = 1; j < 20; j += 1){
        a_tkt2 += 2;
        Sn_tkt2 += a_tkt2;
    }
    int Un_tkt2 = a_tkt1 += Sn_tkt2;
    cout << Un_tkt2 << endl;
    

    return 0;
}
