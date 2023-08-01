#include<iostream>
#include<cmath>
using namespace std;

/* library cmath: referensi --> www.cppreference.com
ceil(x)		<= Pembulatan ke atas
cos(x)		<= cosinus
exp(x) 		<= eksponen
fabs(x)		<= nilai absolut dari float
floor(x)	<= pembulatan ke bawah
fmod(x)		<= modulus dalam float
log(x)		<= logaritma dengan basis natural 
log10(x)	<= logaritma dengan basis 10
pow(x,y) 	<= x pangkat y
sin(x)		<= sinus
sqrt(x)		<= akar kuadrat
tan(x)		<= tangen
round(x)	<= pembulatan normal
*/

int main(){

	int x;
	int y;
	double z;

	cout << "Nilai x: ";
	cin >>x;
	cout << "Nilai y: ";
	cin >>y;
	cout << "Nilai z: ";
	cin >>z;
	cout << "=============\n";

	cout << "akar x		= " << sqrt(x) << endl;
	cout << "akar y		= " << sqrt(y) << endl;
	cout << "pembulatan z	= " << round(z) << endl;
	cout << "x+y		= " << sqrt(x)+sqrt(y) << endl;
	cout << "x.y		= " << sqrt(x)*sqrt(y) << endl;
	
	cout << "=============";
	cin.get();
	return 0;
}
