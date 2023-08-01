#include<iostream>
using namespace std;

int main(){
    
    int c = 0;
    for(int i = 1; i <= 2022; i++){
        if(i % 9 == 0){
            c++;
            if(i % 2 == 0){
                c--;
            }
        } 
         else if(i % 5 == 0){
            c++;
            if(i % 2 == 0){
                c--;
            }
        }
    }
    cout << c;
    return 0;
}
