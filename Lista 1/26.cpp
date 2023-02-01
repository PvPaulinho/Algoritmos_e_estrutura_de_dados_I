#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int i,s,f,x,n;
    cout<< "Digte o primeiro termo da série: ";
    cin>>i;
    cout<< "Digite o segunto termo da serie: ";
    cin>>s;
    cout<< "Digite a quantidade de termos que deseja: ";
    cin>>f;
    for (x=1;x<=f;x++){
            n=i+s;
            i=s;
            s=n;
    cout<< i<< "\n";
            }
getch();}
