#include<iostream>
using namespace std;

struct guru{
	string nama;
	int umur;
};

struct mapel{
	string nama_mapel;
	int kkm;
	guru guru_mapel;
};

int main(){
	mapel mapel1, mapel2, mapel3;
	
	cout << "Nama mapel\t: "; cin >> mapel1.nama_mapel;
	cout << "kkm\t\t: "; cin >> mapel1.kkm;
	cout << "Nama guru\t: "; cin >> mapel1.guru_mapel.nama; 
	cout << "Usia guru\t: "; cin >> mapel1.guru_mapel.umur; 
	
	cout << endl;
	
	cout << "Nama mapel\t: "; cin >> mapel2.nama_mapel;
	cout << "kkm\t\t: "; cin >> mapel2.kkm;
	cout << "Nama guru\t: "; cin >> mapel2.guru_mapel.nama; 
	cout << "Usia guru\t: "; cin >> mapel2.guru_mapel.umur;
	
	cout << endl;
	
	cout << "Nama mapel\t: "; cin >> mapel3.nama_mapel;
	cout << "kkm\t\t: "; cin >> mapel3.kkm;
	cout << "Nama guru\t: "; cin >> mapel3.guru_mapel.nama; 
	cout << "Usia guru\t: "; cin >> mapel3.guru_mapel.umur;
	
	cout << endl;
	
	cout << "=================================" << endl;
	cout << "Output : " << endl;
	cout << "=================================" << endl << endl;
	
	cout << "Nama mapel\t: " << mapel1.nama_mapel << endl; 
	cout << "kkm\t\t: " << mapel1.kkm << endl; 
	cout << "Nama guru\t: " << mapel1.guru_mapel.nama << endl; 
	cout << "Usia guru\t: " << mapel1.guru_mapel.umur << endl;
	
	cout << endl;
	
	cout << "Nama mapel\t: " << mapel2.nama_mapel << endl; 
	cout << "kkm\t\t: " << mapel2.kkm << endl; 
	cout << "Nama guru\t: " << mapel2.guru_mapel.nama << endl; 
	cout << "Usia guru\t: " << mapel2.guru_mapel.umur << endl;
	
	cout << endl;
	
	cout << "Nama mapel\t: " << mapel3.nama_mapel << endl; 
	cout << "kkm\t\t: " << mapel3.kkm << endl; 
	cout << "Nama guru\t: " << mapel3.guru_mapel.nama << endl; 
	cout << "Usia guru\t: " << mapel3.guru_mapel.umur << endl;
	
	cout << endl;

}

