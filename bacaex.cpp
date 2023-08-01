#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ifstream myFile;
    string output, buffer;
    bool isData = false;
    int no;
    string name;

    myFile.open("data1.txt");
    while (!isData)
    {
       getline(myFile,buffer);
       output.append("\n" + buffer);
       if (buffer  == "data")
       {
            isData = true;
       }

    }
    cout << output << endl;

    getline(myFile,buffer);
    cout << buffer << endl;
    int jumlah_data = 0;

    while(!myFile.eof()){
        myFile >> no;
        myFile >> name;

        cout << no << "\t" << name << endl;
        jumlah_data++;
    }
    cout << "jumlah data = " << jumlah_data << endl << endl;

    return 0;
}