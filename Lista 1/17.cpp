#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float n,v,d,p;
    cout<< "Digite o numero de dias trabalhados pelo encanador: ";
    cin>>n;
    cout<< "Digite o valor pago por dia: ";
    cin>>v;
    d=v*0.08;
    p=n*(v-d);
    cout<< "O valor a ser pago ao encanador e: "<<p;
getch();
}
