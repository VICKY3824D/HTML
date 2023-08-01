#include <iostream>
using namespace std;

struct mhs{
  string nim;
  string nama;
  int nilai;
};

char grade(int n){
    if(n > 85){
        return 'A';
    } else if(n > 75 && n <= 85){
        return 'B';
    } else if(n > 65 && n <= 75){
        return 'C';
    } else if(n > 45 && n <= 65){
        return 'D';
    } else {
        return 'E';
    }
}



int main() {
    
    int jml;
    cout << "Jumlah Mahasiswa : "; cin >> jml;
    mhs mahasiswa[jml];
    cout << "Data Mahasiswa" << endl;
    for(int a = 0; a < jml; a++){
        cout << "Data Ke-" << a+1 << endl;
        cout << "Nim\t= "; cin >> mahasiswa[a].nim;
        cout << "Nama\t= "; cin >> mahasiswa[a].nama;
        cout << "Nilai\t= "; cin >> mahasiswa[a].nilai;
        cout << endl;
    }
    
    cout << "===========================" << endl;
    cout << "Output" << endl;
    for(int j = 0; j < jml; j++){
        cout << "Data Ke-" << j+1 << endl;
        cout << "Nim\t= " << mahasiswa[j].nim << endl;
        cout << "Nama\t= " << mahasiswa[j].nama << endl;
        cout << "Nilai\t= " << mahasiswa[j].nilai << endl;
        cout << "Grade\t= " << grade(mahasiswa[j].nilai) << endl;
        cout << endl;
    }
    
    

    return 0;
}