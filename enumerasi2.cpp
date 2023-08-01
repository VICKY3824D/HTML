#include<iostream>
#include<string>
using namespace std;

//Enumerasi gaya baru
const string HARI[] {"Minggu", "Senin","Selasa","Rabu", 
                    "Kamis", "Jumat", "Sabtu"};

enum class Gender{Pria, Wanita};
enum class Nama_hari{Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu};

int main() {
    
    //deklarasi variabel
    string nama;
    Gender jenis_kelamin;
    Nama_hari hari_lahir;

    //mengisi nilai kedalam variabel
    getline(cin, nama);
    jenis_kelamin = Gender::Pria;
    hari_lahir = Nama_hari::Sabtu;

    //menampilkan nilai
    cout << "Nama\t\t: " << nama << endl;
    cout << "Jenis Kelamin\t: "
         << ((jenis_kelamin == Gender::Pria) ? "Pria" : "Wanita") 
         << endl;
    cout << "Hari lahir\t: " << HARI[(int)hari_lahir] << endl;

    return 0;
}
