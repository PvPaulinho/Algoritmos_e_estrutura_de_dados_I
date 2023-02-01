#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int c,p,coelhos,patos;
    cout<< "Digite o numero de cabecas: ";
    cin>>c;
    cout<< "Digite o numero de pes: ";
    cin>>p;
    coelhos=p/4;
    patos=c-coelhos;
    cout<< "\nO numero de coelhos no cercado e de: "<<coelhos<< "\nO numero de patos no cercado e de: "<<patos;
getch();
}
