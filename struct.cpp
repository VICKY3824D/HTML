#include<iostream>
using namespace std;

struct nilai{
    double mtk;
    double bin;
    double big;
    double ipa;
};

int main(){

    nilai alex;
    alex.mtk = 90;
    alex.bin = 88;
    alex.big = 92;
    alex.ipa = 94;

    nilai ana;
    ana.mtk = 96;
    ana.bin = 94;
    ana.big = 95;
    ana.ipa = 97;

    cout << "Nilai Alex: " << endl;
    cout << "Matematika\t = " << alex.mtk << endl;
    cout << "Bahasa Indonesia = " << alex.bin << endl;
    cout << "Bahasa Inggris\t = " << alex.big << endl;
    cout << "IPA\t\t = " << alex.ipa << endl << endl;

    cout << "Nilai Ana:" << endl;
    cout << "Matematika\t = " << ana.mtk << endl;
    cout << "Bahasa Indonesia = " << ana.bin << endl;
    cout << "Bahasa Inggris\t = " << ana.big << endl;
    cout << "IPA\t\t = " << ana.ipa << endl;

    return 0;
}