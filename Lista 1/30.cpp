#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float n,x=0,s=0,m;
    while (1){
                cout<< "Digite um numero: ";
                cin>>n;
        if(n<0) break;
        else{
                s=s+n;
                x++;
        }
    }
    m=s/x;
    cout<< "A media dos numeros digitados e: "<<m;
getch();}
