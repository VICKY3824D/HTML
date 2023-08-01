#include<iostream>
using namespace std;

int main(){

    int i = 1, j = 1, k = 1, p, q;

    cout << "# Program Fizz_Buzz #\n=====================" << endl;
    cout << "Dari   : ";
    cin>>p;
    cout << "Sampai : ";
    cin>>q;
    
    for(int x = p; x <= q; x++){
        if (x % 3 == 0){
            if (x % 15 == 0){
            continue;}
            i++;
        }
        else if (x % 5 == 0){
            if (x % 15 == 0){
            continue;}
            j++;
        }
    }
    
    i = i - 1;
    j = j - 1;
    cout << "Fizz = " << i << " digit" << endl;
    cout << "buzz = " << j << " digit" << endl;
    return 0;
}
