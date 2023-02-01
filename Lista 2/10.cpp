#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string va[20],amaior,amenor;
    float vn[20],maior=0,menor=100;
    for (int i=0;i<=19;i++){
        cout<< "Digite o nome do aluno: ";
        cin>>va[i];
        cout<< "Digite a nota dele: ";
        cin>>vn[i];
        if (maior<vn[i]){
            maior=vn[i];
            amaior=va[i];
        }
        if (menor>vn[i]){
            menor=vn[i];
            amenor=va[i];
        }
    }
    for (int i=0;i<=19;i++){
        cout<< "Aluno: "<<va[i]<< ". Nota: "<<vn[i]<< "\n";
    }
    cout<< "A maior noda foi de: "<<amaior<< " com "<<maior<< "\nA menor nota foi de: "<<amenor<< " com "<<menor;
getch();}
