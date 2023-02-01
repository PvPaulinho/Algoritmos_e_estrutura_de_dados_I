#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float X,N,d,x=1;
    cout<< "Digite um numero: ";
    cin>>X;
    cout<< "Digite um outro numero: ";
    cin>>N;
    for (d=(x/N);x<=X;x++){
        if (x%N==0){
            cout<< "Os numeros diviziveis por "<<N<< " de 1 a "<<X<< " sao: "<<x<< "\n";
        }
    }
getch();}
