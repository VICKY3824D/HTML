#include<iostream>
using namespace std;

// Logika Matematika(boolean)
int main(){

	bool A = true;
	bool B = true;
	bool C = false; 
	bool D = false; 
	bool E = true;
 	bool x;
	x = ((E and not(A and not(B) or C or D and E)) and (A and not(C)and(not(D) or E)));

	if(x){
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	
	return 0;	


}

