#include <iostream>
using namespace std;

void string1(){
	string nama("cat");
    
    //menampilkan data string 
    cout << nama << endl;
    
    //mengambil karakter berdarsarkan index
    cout << "index ke-0 : " << nama[0] << endl;
    cout << "index ke-1 : " << nama[1] << endl;
    cout << "index ke-2 : " << nama[2] << endl;
    
    //merubah karakter pada index
    nama[0] = 'p';
    cout << nama << endl;
    
    //menyambung, concatenation
    string nama2("nje" + nama);
    cout << nama2 << endl;
    
    string nama3("sendale");
    nama2.append(" " + nama3);
    cout << nama2 << endl;
    
    string nama4("wkwkwk");
    nama2 = nama2 + " " + nama4;
    cout << nama2 << endl;
}

void akses_substring(){
	string kalimat_1("Andi suka olahraga jari");
	string kalimat_2("marno suka makan pisang ambon");
	
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;
	
	// substring -> mengambil bagian dari string
	// namastring.substr(index,panjang)
	cout << kalimat_1.substr(10,8) << " ";
	cout << kalimat_2.substr(17,6) << endl;
	
	//mencari posisi substring -> namastring.find("");
	cout << "posisi olahraga: ";
	cout << kalimat_1.find("olahraga");
	cout << "\nposisi pisang: ";
	cout << kalimat_2.find("pisang");
	
	// mencari posisi string selanjutnya
	int a = kalimat_1.find("a");
	cout << a << endl;
	cout << kalimat_1.find("a", a + 1) << endl;
	
	//mencari string dari belakang -> rfind
	cout << kalimat_1.rfind("r") << endl;
	
}

int main() {
    
    //string1();
    cout << endl;
    akses_substring();
    
    return 0;
}
