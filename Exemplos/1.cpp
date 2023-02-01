#include <iostream>
#include <conio.h>
using namespace std;
struct pessoa{
    double peso;
    double altura;
    string nome;
};
double imc (pessoa x){
    double z;
    z=x.peso/(x.altura*x.altura);
    return z;
}
int main(){
    pessoa p;
    double mp;
    int s;
    while (1){
        cout<< "\nDigite 1 se quiser fazer o IMC de uma pessoa, ou digite 0 se quiser sair:";
        cin>>s;
        if (s==0){
            break;
        }
        if (s==1){
            cin.ignore();
            cout<< "\nDigite o nome da pessoa: ";
            getline (cin,p.nome);
            cout<< "\nDigite o peso da pessoa: ";
            cin>>p.peso;
            cout<< "\nDigite a altura da pessoa: ";
            cin>>p.altura;
            mp=imc(p);
            cout<< "\nNome: "<<p.nome<< "\nPeso: "<<p.peso<< "\nAltura: "<<p.altura<< "\nIMC: "<<mp<< "\n";
        }
    }
getch();}
