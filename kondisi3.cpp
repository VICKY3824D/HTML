#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"x: ";
    cin>>x;

    //jika perintah 1 salah 
    //maka akan dijalankan perintah selanjutnya yang benar

    if (x > 0){
        if (x % 2 == 0){
            cout << "Bilangan ini positif genap" << endl;
        }   else{
            cout << "Bilangan ini positif ganjil" << endl;
        }
         
    }else if (x < 0 ){
         if (x % 2 == 0){
            cout << "Bilangan ini negatif genap" << endl;
        }   else{
            cout << "Bilangan ini negatif ganjil" << endl;
        }
    }
}