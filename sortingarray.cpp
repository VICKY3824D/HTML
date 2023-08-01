#include <iostream>
using namespace std;

//! Entering index
void enter_index(int value[], int length){
    for (int k = 0; k < length; k++){
        cout << "Enter index-" << k << " : ";
        cin >> value[k];
    }
    cout << "======================" << endl;
}

//! sorting values of array(bubblesort method)
void bubblesort(int *value, int length){
    for (int i = 1; i < length; i++){
        for (int j = 0; j < length - i; j++){
            if (value[j] > value[j + 1]){
                swap(value[j], value[j+1]);
            }
        }
    }
}

//! displaying sorted values
void displaying_shrt(int value[], int length){
    cout << "Sorting result: " << endl;
    cout << "======================" << endl;
    for (int h = 0; h < length; h++){
        cout << " " << value[h] << endl;
    }
}

int main(){


    int length;
    cout << "Enter index amount : ";
    cin >> length;
    int value[length];
    cout << "======================" << endl;
    
    enter_index(value,length);
    bubblesort(value, length);
    displaying_shrt(value, length);

    return 0;
}
