#include<iostream>
using namespace std;

int wtf(int x){
    int wth = 0;
    for (int i = 1; i < x+1; i++) {
       if(i % 2 == 0){
           wth++;
       } else {
           wth--;
       }
    }
    return wth;
}

int main(){

    int jawaban = 0;
    for(int i = 1; i <= 2022; i++){
        if (wtf(i) == 0) {
           jawaban++;
        }
    }
    
    cout << jawaban << endl;
    return 0;
}
