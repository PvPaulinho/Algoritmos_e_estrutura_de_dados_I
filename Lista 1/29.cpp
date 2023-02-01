#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,x=0;
    while (1){
        if (n>=0){
                cout<< "Digite um numero: ";
                cin>>n;
                x++;
        }
        else{
            break;
        }
    }
    cout<< "Foram digitados "<<x<< " numeros.";
getch();}
