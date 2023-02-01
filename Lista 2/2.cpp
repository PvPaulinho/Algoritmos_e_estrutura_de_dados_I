#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    int v[15];
    for (int i=0;i<=14;i++){
        cout<< "informe um numero: ";
        cin>>v[i];
    }
     for (int i=0;i<=14;i++){
            if (v[i]%3==0){
                cout<< "Os multiplos de 3 sao: " <<v[i]<< "\n";
            }
     }
getch();}
