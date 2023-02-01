#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int m[4][4];
    for (int i=0;i<4;i++){
        for (int u=0;u<4;u++){
            cout<< "entre com os numeros ";
            cin>>m[i][u];
        }
    }
    for (int i=0;i<4;i++){
        for (int u=0;u<4;u++){
            if (i!=u){
                cout<<m[i][u]<< " ";
            }
        }
    }
}
