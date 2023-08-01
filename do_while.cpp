#include<iostream>
using namespace std;

//perulangan do-while
int main(){
	int N; 
	cout<<"Masukkan nilai N:";
	cin>>N;
	int i = 3; 
	do {
		cout << "Tulisan ini dicetak saat i= " << i << endl;
		i += 3;
	}	while (i <= N);
	cout << "Ahkir dari program" << endl;
	return 0;
}
	
	

