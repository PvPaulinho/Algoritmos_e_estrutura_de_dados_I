#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float s,j,novo;
    cout<< "Digite o saldo:";
    cin>>s;
    cout<< "Digite o juros:";
    cin>>j;
    novo=s+s*(j/100);
    cout<< "Novo saldo = "<<novo;
getch();
}
