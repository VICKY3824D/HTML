#include<iostream>
using namespace std;

//perulangan for
int main(){

   for (int i = 1; i <= 19; i++) {
       if (i % 6 == 0) {
           cout << "* ";
       } else {
            cout << i << " ";
       }
   }
   
    cout << "#" << endl;
    return 0;
}
