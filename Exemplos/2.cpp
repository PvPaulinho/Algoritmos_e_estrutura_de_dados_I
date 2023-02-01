#include <iostream>
#include <conio.h>
using namespace std;
struct ligacao{
    double tarifaminuto;
    double numminutos;
    string pessoa;
};
double custo(ligacao x){
    double c;
    c=x.numminutos*x.tarifaminuto;
    return c;
}
int main(){
    int t=0;
    ligacao v[10000];
    double cl;
    int menu;
    while(1){
        cout<< "\n1 - Cadastrar ligacao.\n2 - Listar ligacoes ordenadas pelo nome.\n3 - Buscar ligacao pelo nome da pessoa.\n4 - Sair.\n";
        cin>>menu;
        if (menu==1){
            cin.ignore();
            cout<< "\nDigite o nome: ";
            getline(cin,v[t].pessoa);
            cout<< "\nDigite  a tarifa por minuto: ";
            cin>>v[t].tarifaminuto;
            cout<< "\nDigite os minutos: ";
            cin>>v[t].numminutos;
            t++;
        }
        if (menu==2){
            for (int i=0; i<t-1; i++){
                for (int u=i+1; u<t; u++){
                    if (v[i].pessoa>v[u].pessoa){
                        ligacao z;
                        z=v[i];
                        v[i]=v[u];
                        v[u]=z;
                    }
                }
            }
            for (int i=0; i<t; i++){
                cl=custo(v[i]);
                cout<< "\n" <<i+1<< " - Nome: "<<v[i].pessoa<< "\n    Tarifa por minuto: "<<v[i].tarifaminuto<< "\n    Minutos: "<<v[i].numminutos<< "\n    Custo: "<<cl<< "\n";
            }
        getch();}
        if (menu==3){
            string n;
            cin.ignore();
            cout<< "\nDigite o nome da pessoa, que deseja proucurar a ligacao: ";
            getline(cin,n);
            for (int i=0;i<t;i++){
                if (n==v[i].pessoa){
                    cl=custo(v[i]);
                    cout<< "\nNome: "<<v[i].pessoa<< "\nTarifa por minuto: "<<v[i].tarifaminuto<< "\nMinutos: "<<v[i].numminutos<< "\nCusto: "<<cl<< "\n";
                }
            }
        getch();}
        if (menu==4){
            break;
        }
    }
}
