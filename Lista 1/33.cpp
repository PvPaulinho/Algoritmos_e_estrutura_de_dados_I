#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,maior;
    cout<< "Informe um numero: ";
    cin>>n;

    maior=n;

    while (n!=(-999)){
        cout<< "Informe um numero: ";
        cin>>n;
        if (n>maior)maior=n;
    }
    cout<< "O maior numero informado foi: "<<maior;
getch();}
