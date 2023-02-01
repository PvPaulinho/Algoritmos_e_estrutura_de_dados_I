#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n1,n2,x,s=0;
    cout<< "Digite o primeiro numero do intervalo: ";
    cin>>n1;
    cout<< "Digite o outro numero: ";
    cin>>n2;
    for (x=n1;x<=n2;x++){
            if (x%2==0){
                s=s+x;
            }
    }
    cout<< "A soma dos numeros pares do intervalo e: "<<s;
getch();}
