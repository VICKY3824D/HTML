#include<iostream>
using namespace std;

int main(){
	int N;
	
	cout <<"N: ";
	cin >> N;
	cout << "\nMulai Program\n==========================" << endl;
	
	int j=1;
	for (int i = 2; i <= N; i *= 2){
		cout << "Suku ke-" << j++ <<"dari i = "<< i << endl;
	}
	cout << "==========================\nAkhir dari program"<<endl;
}

