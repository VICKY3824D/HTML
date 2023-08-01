#include <iostream>
using namespace std;

//fungis bold
ostream& bold_on(ostream& os){
    return os << "\e[1m";
}

ostream& bold_off(ostream& os){
    return os << "\e[0m";
}

void E(){
      for(int i = 1; i <= 7;i ++){
        if(i==1){
            for(int j = 1; j <= 2; j++){
                if(j==1){
                    cout << bold_on << "* " << bold_off;
                }
                cout << bold_on << " * " << bold_off;
            }
        }
        if(i==4){
            for(int j = 1; j <= 2; j++){
                if(j==1){
                    cout << bold_on << "* " << bold_off;
                }
                cout << bold_on << " * " << bold_off;
            }
        }
        if(i==7){
            for(int j = 1; j <= 2; j++){
                if(j==1){
                    cout << bold_on << "* " << bold_off;
                }
                cout << bold_on << " * " << bold_off;
            }
        }
        cout << bold_on << "*"  << bold_off << endl;
    }  

}

void I(){
    for(int i = 1; i <= 7;i ++){
        cout << bold_on << " * "  << bold_off << endl;
    }
}

void R(){
    for(int i = 1; i <= 7;i ++){
        if(i==1){
            for(int j = 1; j <= 2; j++){
                if(j==1){
                    cout << bold_on << " * " << bold_off;
                }
                cout << bold_on << " * " << bold_off;
            }
        }
        
        cout << bold_on << " * " << bold_off << endl;
    }
}

int main() {

    E(); cout << endl;
    I(); cout << endl;
    R(); cout << endl;
    return 0;
}
