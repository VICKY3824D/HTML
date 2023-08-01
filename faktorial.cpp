#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Hitung Faktorial ##" << endl;
  cout << "===================================" << endl;
  cout << endl;
 
 unsigned long long angka, hasil, i;
 
  cout << "Input angka: ";
  cin >> angka;
 
  hasil = 1;
  for(i=1;i<=angka;i++) {
    hasil = hasil * i;
  }
  cout << angka << "! = " << hasil;
  cout << endl;
 
  return 0;
}