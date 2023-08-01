#include <iostream>
using namespace std;

void subtitusi_str(){
    string kalimat_1("Aku suka kamu suka, siapa? dia!");
    string kalimat_2("Wakanda forevah!!!");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // menukar string -> swap(nama string 1, nama string 2)
    kalimat_1.swap(kalimat_2);
    cout << "menukar string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // replace atau mengganti string
    // namastring.replace(letak string,panjang string, "(karakter pengubah)");
    kalimat_2.replace(27,3, "otong");
    kalimat_1.replace(
        kalimat_1.find("ah"),
        2,
        "er"
    );

    cout << "replace string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    //insert string
    kalimat_1.insert(8, "dan hatiku ");
    cout << "insert string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;
}

int main(){

    subtitusi_str();

    return 0;
}