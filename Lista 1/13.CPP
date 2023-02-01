#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float s,p;
    cout<< "Digite seu salario bruto:";
    cin>> s;
    cout<< "Digite o valor da prestacao desejada:";
    cin>> p;
    if (p<=s*0.30){
        cout<< "O emprestimo pode ser concedido";
    }
    else
        cout<< "O emprestimo não pode ser concedido";
getch();
}
