#include<iostream>
using namespace std;
int main(){

    int  x, y, z=0;

    
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
   

    while (x <= y){
        x++;
        if(x % 3 == 0){
            z++;
        }else if(x % 5 == 0){
            z++;
        }
    }
    cout << z << endl;
    return 0;
}


