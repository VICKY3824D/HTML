#include<iostream>
using namespace std;

int main(){
    
    //masukkkan N dan M
    int N, M;
    cout<<"Ke-bawah             : "; cin>>N;
    cout<<"Ke-samping/segitiga  : "; cin>>M;
    cout << endl;

    //pola persegi
    for(int i = 1; i <= N; i++){//pola ke bawah
        for(int j = 1; j <= M; j++){//pola ke samping
            cout<<" * ";
        }
        cout << endl;
    }
    cout << endl;

    //pola segitiga N
     for(int i = 1; i <= N; i++){//pola ke bawah
        for(int j = 1; j <= i; j++){//pola ke samping
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;

    //pola segitiga N
     for(int i = 1; i <= N; i++){//pola ke bawah
        for(int j = N; j >= i; j--){//pola ke samping
            cout << " * ";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}



