#include<iostream>
using namespace std;

int main(){

    int j=1;
    int n;

    cout << "n = ";
    cin >> n;

    for(int i=1; i <= n; i++){
        if(n*n%n==0){
            j++;
                if(n%1200==0){
                    j--;
        }
        }
        
        j++;
    }
    cout << j << endl;
    return 0;

}

