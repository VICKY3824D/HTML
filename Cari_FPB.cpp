#include <iostream>
using namespace std;

//program mencari FPB
int FPB(int m, int n){
    if(n % m == 0){
        return m;
    } if (n < m){
        swap(n,m);
    } while (m > 0){
        n = n % m;
        swap(n,m);
    }
    return n;
}

int main() {
	
	int x, y;
	
	cout << "FPB dari	: "; cin >> x;
	cout << "Dan 		: "; cin >> y;
    
    cout << FPB(x,y);

    return 0;
}
