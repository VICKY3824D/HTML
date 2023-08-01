#include<iostream>
using namespace std;

int main(){
	
	string kalimat("Saya sedang makan");
	string kal("Saya sedang tidur");
	
	cout << "Kalimat : " << kalimat << endl;
	cout << "Kal : " << kal << endl << endl;
	
	kalimat.swap(kal);//menukar (swap) 
	
	cout << "Kalimat : " << kalimat << endl;
	cout << "Kal : " << kal << endl << endl;
	
	int kata_cari = kalimat.find("tidur");// mencari kata 
	cout << "kata tidur ada di : " << kata_cari << endl << endl; 
	
	kalimat.replace(5,6, "lagi sedang ngapain");//mengganti kata
	kal.replace(5,6, "sedang");
	
	cout << kalimat << endl;
	cout << kal << endl << endl;
	
	int jml_kar = kalimat.length();
	cout << "Jumlah kalimat : " << jml_kar << endl;
	cout << endl;
	
	int jml_kata = 1;
	for(int i = 0; i < jml_kar; i++){
		if(kalimat[i] == ' '){
			jml_kata++;
		}
	}
	cout << kalimat << endl;
	cout << "Jumlah kata : " << jml_kata << endl << endl;
	
	//replace inputan keyboard
	string kata_ubah;
	cout << "Kata yang akan diubah : ";
	getline(cin, kata_ubah);
	int jml_kar_ubah = kata_ubah.length();
	int kata_ubah_cari = kalimat.find(kata_ubah);
	if(kata_ubah_cari > -1){
		string pengubah;
		cout << "Ubah dengan : ";
		getline(cin, pengubah);
		kalimat.replace(kata_ubah_cari, jml_kar_ubah, pengubah);
	} else {
		cout << "Kata tidak ditemukan" << endl;
	}
	cout << "kalimat menjadi : " << kalimat << endl;
	
	return 0;
}
