#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream myFiles;

    myFiles.open("dat.txt", ios::app);
    myFiles << "\nbantu saya untuk ide";
    myFiles.close();

    return 0;
}
