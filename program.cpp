#include<iostream>
using namespace std;

int main(){
   
   /*double*/auto x=10.3471;//double(bilangan riil)
   /*int*/auto z=1000000000;//int --> bilangan bulat yang menampung 10 digit
   /*long long*/auto y=1000000000000000000;//long long bilangan bulat menampung 19 digit

   cout << "x: "<< x << " " << &x << endl;
   cout << "z: "<< z << " " << &y <<  endl;
   cout << "y: "<< y << " " << &z <<  endl;


    return 0;
}
