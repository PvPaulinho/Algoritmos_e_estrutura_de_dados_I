#include <iostream>
#include <conio.h>
using namespace std;
struct pessoa {
    string nome;
    int idade;
};
int main (){
    pessoa a,b;
    cout<< "Digite o nome: ";
    cin>> a.nome;
    cout<< "Idade: ";
    cin>> a.idade;
    cout<< "Nome: ";
    cin>> b.nome;
    cout<< "Idade: ";
    cin>> b.idade;
    cout<< "\n\nNome: "<<a.nome<< "\nIdade: "<< a.idade<< "\n\n";
    cout<< "Nome: "<<b.nome<< "\nIdade: "<<b.idade;
getch();}
