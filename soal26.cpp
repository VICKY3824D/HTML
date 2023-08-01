#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c=0;
   
    cout << "dari: ";
    cin >> a;
    cout << "sampai: ";
    cin >> b;

    while(a<=b){
	    if(a%11==0){
		    c++;
		    a++;}
		else if(a%12==0){
			a++;} 
	    else {
			if(a%4==0){
		    c++;}
		 a++;
		}
    }
	cout << "Hasilnya = " << c <<endl;
	return 0;		
}





