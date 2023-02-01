#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int x,y,n;
    cout<< "Digite quais os primeiros numeros triangulares que deseja: ";
    cin>>n;
    for (x=1;x<=n;x++){
            cout<< "\n"<<x*(x+1)*(x+2);
    }
getch();}
