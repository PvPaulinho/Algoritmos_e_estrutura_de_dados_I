#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,x,p=0,i=0;
    for (x=1;x<=20;x++){
        cout<< "Digite um numero: ";
        cin>>n;
        if (n%2==0){
            p++;
        }
        else if ((n%2)!=0){
            i++;
        }
    }
    cout<<p<< " numeros sao par e "<<i<< " sao impares.";
getch();}
