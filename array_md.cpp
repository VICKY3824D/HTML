#include<iostream>
using namespace std;

int main(){

    const int baris = 4, kolom = 4;
    int data[baris][kolom] {1,2,3,4,100,200,300,400,1000,2000,3000,4000,10000,20000,30000,40000};
    
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            if(data[i][j] < 10){
                cout << data[i][j] << "      ";
            } else if(data[i][j] < 1000){
                cout << data[i][j] << "    ";
            } else if(data[i][j] < 10000){
                cout << data[i][j] << "   ";
            } else if (data[i][j] < 100000){
                cout << data[i][j] << "  ";
            } else {
                cout << data[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}