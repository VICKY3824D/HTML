#include <iostream>
using namespace std;

void selectionSort(int arr[]){
    for(int i = 0;i < 4;i++){
        int min = i;
        
        for(int j = i + 1;j < 5;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[min],arr[i]);
        }
    }
}

int main() {
    
    int myarr[] = {3,0,1,9,2};
    selectionSort(myarr);
    for(int e: myarr){
        cout << e << " ";
    }

    return 0;
}