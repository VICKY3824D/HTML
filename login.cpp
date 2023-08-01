#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool IsLoggedIN(){

    string username, password, us , pw;
    cout << "Masukkan Username : "; cin >> username;
    cout << "Masukkan Password : "; cin >> password;

    ifstream read("data" + username +".txt");
    getline(read, us);
    getline(read, pw);
    if (us == username && pw == password) return true;
    else return false;
    
}

int main(){
    int choice;

    cout << "1. Registrasi\n2. Login\nPilihan: "; cin >> choice;
    if (choice == 1) {
        string username, password,noHp, alamat,gender;
        cout << "Buat username : "; cin >> username;
        cout << "Buat password : "; cin >> password;

        ofstream file;
        file.open("data" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();
    } else if(choice == 2){
        bool status = IsLoggedIN();
        if (!status) {
            cout << "Login Gagal" << endl;
            system("PAUSE");
            return 0;
        } else {
            cout << "Login Berhasil" << endl;
            system("PAUSE");
            return 1;
        }
    }   
    
    return 0;
}
