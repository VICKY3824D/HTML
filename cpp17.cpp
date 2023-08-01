#include <iostream>
#include <algorithm>
#include <array>
#include <cmath>
using namespace std;

int main() {

    array<int, 9> data = {1, 3, 5, 7, 9, 8, 6, 4, 2}; // library array

    sort(data.begin(), data.end()); // library algorithm

    for (int i : data) {
        cout << i << " ";
    }
    cout << endl;

    cout << data[8] << " x " << data[1] << " = ";
    cout << pow(data[8], data[1]) << endl; // library cmath

    return 0;
}
