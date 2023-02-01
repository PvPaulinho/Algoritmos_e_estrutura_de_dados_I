#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,d,x=1;
    cout<< "Digite um numero: ";
    cin>>n;
    for (d=(n/x);x<=n;x++){
        if (n%x==0){
            cout<< "Os divizores de "<<n<< " sao: "<<x<< "\n";
        }
    }
getch();}
