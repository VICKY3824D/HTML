#include<iostream>
#include<cstdlib>
using namespace std;

ostream& bold_on(ostream& os){
    return os << "\e[1m";
}

ostream& bold_off(ostream& os){
    return os << "\e[0m";
}

int panas(int x){
    int dingin;
    dingin = 0;
    while (x >= 0){
        dingin++;
        if (x % 3 == 0) x = x - 5;
        else if (x % 5 == 0) x = x - 3;
        else x--; 
    }
    return dingin;
}

int ayam(int a, int b){
    if(b == 0) return 0;
    else if(b == 1) return a;
    else return ayam(a, b / 2) * 2 + ayam(a, b % 2);
}

int kucing(int tikus, int keju){
    if(tikus > keju) return 0;
    else return tikus + kucing(tikus * 2 + 1, keju);
}

bool apaini(int kwak){
    int j;
    if (kwak * kwak == kwak){
        return false;
        exit;
    }
    for (int i = 2; i <= (kwak-1); i++){
        j = 1;
        while (j*i <= kwak){
            if (i*j == kwak){
                return false;
                exit;
            }
            j++;
        }
    }
    return true;
}

int apaitu(int kwok){
    auto kwak = kwok;
    auto kwik = 0;

    for (auto i = 0; i <= kwak; i++){
        if (apaini(i) == true){
            kwik++;
        }
    }
    return kwik;
}

void santuy(){
    int n = 15, a = 1, b = n, ambyar = 0, f = 98, m;
    int data[] {13,17,25,28,30,41,45,56,58,64,73,76,87,91,98};
   
    while (a <= b) {
        m = (a+b) / 2;
        ambyar = ambyar + data[m];
        if(data[m] == f) break;
        else if(data[m] < f) a = m + 1;
        else  b = m - 1;
    }   
    cout << "39. " << ambyar << endl;
}

int main(){

    cout << bold_on << "\nJawaban KSN-K Informatika 2020 ";
    cout << bold_off << endl << endl;
    cout << "36. " << panas(789) << endl;
    cout << "37. " << ayam(19,39) << endl;
    cout << "38. " << kucing(1,2018) << endl;
    //santuy();// ! PERLU EVALUASI
    cout << "40. " << apaitu(1000) << endl << endl;

    return 0;
}