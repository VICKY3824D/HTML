#include<iostream>
using namespace std;

//fungsi prototype
int pelatos(int x);
int solve(int y);
void tampilkan_pelatos(int x);
void tampilkan_solve(int y);

int main(){

    int x, y;
    cout << "pelatos(x) => x = ";
    cin >> x;
    cout << "solve(y) => y = ";
    cin >> y;
    cout <<"================\nhasilnya:" << endl;

    tampilkan_pelatos(x);
    tampilkan_solve(y);

    cin.get();
    return 0;
}

int pelatos(int x){

    int ans=0;
    for(int i = 1; i <= x; i++){
        ans = ans + i;
    }
    return ans;
}

int solve(int y){

    int ans=0;
    for(int i = 1; i <= y; i++){
        ans = ans + pelatos(i);
    }
    return ans;
}

void tampilkan_pelatos(int x){//tampilakan hasil pelatos
    cout << "pelatos(" << x << ") = " <<  pelatos(x) << endl;
}

void tampilkan_solve(int y){//tampilakan hasil solve
    cout << "solve(" << y <<  ") = "<< solve(y) << endl;
}


