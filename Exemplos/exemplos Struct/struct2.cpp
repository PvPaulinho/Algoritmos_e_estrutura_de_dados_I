#include <iostream>
#include <conio.h>
using namespace std;
struct pessoa{
    string nome;
    int idade;
};
int main(){
    int t=5;
    pessoa v[t];
    for (int i=0;i<t;i++){
        cout<< "Nome: ";
        cin>> v[i].nome;
        cout<< "Idade: ";
        cin>> v[i].idade;
    }
    for (int i=0;i<t;i++){
        cout<< "\n\nNome: "<< v[i].nome<< "\nIdade: "<< v[i].idade<< "\n";
    }
}
