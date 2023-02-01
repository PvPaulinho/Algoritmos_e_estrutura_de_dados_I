#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string e;
    char a='@';
    char b='.';
    int x=0,y=0;
    cout<< "Digite um endereco de email: ";
    cin>>e;
    for (int i=0;i<e.size();i++){
        if (a==e[i])
            x++;
        if (b==e[i])
            y++;
    }
    if (x==1&&y>0)
        cout<< "O email informado e valido.";
    else
        cout<< "O email informado nao e valido.";
getch();}
