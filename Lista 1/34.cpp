#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,z=0,x;
    while (n!=0){
    cout<< "Digite um numero: ";
    cin>>n;
    for (x;x<=n/2;x++){
        if (n%x==0){
            z++;
        }
    }
        if (z==0){
            cout<<n<< " e um numero primo.\n";
        }
        if (z!=0) {
            cout<<n<< " nao e um numero primo.\n";
        }
        z=0;
    }
getch();}
