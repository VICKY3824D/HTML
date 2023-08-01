#include <iostream>
using namespace std;

int tri[15][15],i,j;

int main() {
    
    for(int i = 0; i <= 14; i++){
        for(int j = 0; j <= 14; j++){
            tri[i][j] = 0;
        }
    }
    tri[0][0] = 1;
    for(int i = 1; i <= 14; i++){
        tri[i][0] = 1;
        tri[i][i] = 1;
        for(int j = 1; j <= (i-1); j++){
            tri[i][j] = tri[i-1][j] + tri[i-1][j-1];
        }
    }
    int sum = 0;
    for(int i = 5; i <= 14; i++){
        sum += tri[i][5];
    }
    cout << sum << endl;
    return 0;
}