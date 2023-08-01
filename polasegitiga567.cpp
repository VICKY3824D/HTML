#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "\nMasukkan Pola:";
    cin >> n;


    cout << "Pola 2\n";// Segitiga siku-siku di atas kiri

    for(int i=1; i <= n; i++){//pola ke bawah
        for(int j=n; j>=i; j--){//pola ke samping
            cout << "*";
        }
        cout << endl;
    }
    cout << "Pola 3\n";// Segitiga siku siku di atas kanan

    for(int i=1; i <= n; i++){//pola ke bawah dari spasi
        for(int j=1; j<=i; j++){//pola ke samping dari spasi
            cout << " ";
        }
    for(int k=n; k>=i; k--){//pola dari bintang
        cout << "*";
    }
        cout << endl;
    }
    cout << "Pola 4\n";// Segitiga sikun-siku di bawah kanan

    for(int i=0; i <= n; i++){//pola ke bawah dari spasi
        for(int j=n; j>=i; j--){//pola ke samping dari spasi
            cout << " ";
        }
    for(int k=1; k<=i; k++){//pola dari bintang
        cout << "*";
    }
        cout << endl;
    }

    cout << "Pola 5\n";// Segitiga sama kaki

    for(int i=0; i <= n; i++){//pola ke bawah dari spasi
        for(int j=n; j>=i; j--){//pola ke samping dari spasi
            cout << " ";
        }
    for(int k=1;k<=(2*i-1); k++){//pola dari bintang
        cout << "*";
    }
        cout << endl;
    }
    cout << "Pola 6\n";// Segitiga sama kaki terbalik

    for(int i=1; i <= n; i++){//pola ke bawah dari spasi
        for(int j=1; j<=i; j++){//pola ke samping dari spasi
            cout << " ";
        }
    for(int k=n;k>=(2*i-n); k--){//pola dari bintang
        cout << "*";
    }
        cout << endl;
    }
    
    cout << "Pola 7\n";// Pola Ketupat

    for(int i=1; i <= n; i++){//pola ke bawah dari spasi
        for(int j=n; j>=i; j--){//pola ke samping dari spasi
            cout << " ";
        }
    for(int k=1;k<=(2*i-1); k++){//pola dari bintang
        cout << "*";
    }
        cout << endl;
    }
     for(int i=2; i <= n; i++){//pola ke bawah dari spasi
        for(int j=1; j<=i; j++){//pola ke samping dari spasi
            cout << " ";
        }
    for(int k=n;k>=(2*i-n); k--){//pola dari bintang
        cout << "*";
    }
        cout << endl;
    }

    cout << endl;
    cin.get();
    return 0;
}