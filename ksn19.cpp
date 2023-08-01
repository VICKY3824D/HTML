#include<iostream>
using namespace std;

int array[] {8,1,6,3,4,15};
int aduk[6];

auto kalikali(){
    aduk[0] = 1;
    for (auto i = 1; i <= 6; i++){
        aduk[i] = aduk[i-1] * array[i-1];
    }
}

auto hasil(int kiri, int kanan){
    return (aduk[kanan] / aduk[kiri-1] );
}


auto asik(int a, int b, int x){
    for (auto i = 1; i <= x; i++){
        a = a + b;
    }
    return a;
}

auto seru(int a, int b, int x){
    for (auto i = 1; i <= x; i++){
        a = a - b;
        break;
    }
    return a;
}

int main(){

    cout << endl << "Jawaban KSN-K Informatika 2019 " << endl;
    kalikali();
    cout << "32. " << aduk[3] << endl;
    cout << "33. " << hasil(2,3) << endl;
    cout << "34. " << hasil(4,6) << endl;
    cout << "35. " << asik(1,9,5) << endl;
    cout << "36. " << seru((asik(15,9,2000)), 9, 2000);
    cout << endl<< endl;

    return 0;
}
