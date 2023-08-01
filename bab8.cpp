#include <iostream>

#define F(a) (a) * (a) * (a)
#define PI 3.14

using namespace std;

int main(){

    cout << F(5+5) << endl;
    cout << PI << endl;

    #undef F(a)
    #define F(a) (a) * (a)
    cout << F(10) << endl;

    return 0;
}