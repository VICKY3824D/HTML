#include<iostream>
using namespace std;

void ptr(int &poin){
	poin += 4;
	cout << poin << " " << &poin << endl;
}

void kuadrat(int &kud){

	kud = kud*kud;
	cout << kud << " " << &kud << endl;
}

int main(){
	
	int a;
	cout << "Masukkan nilai a = "; cin >> a;
	
	ptr(a);
	kuadrat(a);
	
	
	return 0;
}
