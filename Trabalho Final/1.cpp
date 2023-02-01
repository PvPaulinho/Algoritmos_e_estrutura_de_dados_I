#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
struct contato{
    string nome;
    string telefone;
    string email;
};
contato v[10000];
int main(){
    int menu=0;
    int t=0;
    while(1){
        cout<< "\nDigite:\n1-Inserir novo conato\n2-Exibir contatos cadastrados\n3-Salvar contatos em arqueivo\n4-Ler contatos do arquivo\n5-Sair\n";
        cin>>menu;
        if (menu==1){
                cout<< "\nDigite o nome: ";
                cin.ignore();
                getline(cin,v[t].nome);
                cout<< "Digite o telefone: ";
                cin>>v[t].telefone;
                cout<< "Digite o email: ";
                cin.ignore();
                getline(cin,v[t].email);
                t++;}
        if (menu==2){
            for (int i=0; i<t; i++){
                cout<< "\nNome: "<<v[i].nome<< "\nTelefone: "<<v[i].telefone<< "\nEmail: "<<v[i].email<< "\n\n";
            }
        getch();}
        if (menu==3){
            ofstream fout ( "TrabalhoFinal.txt" );
            for (int i=0; i<t; i++){
                fout<<v[i].nome<< "\n";
                fout<<v[i].telefone<< "\n";
                fout<<v[i].email<< "\n";
            }
            fout.close();
            }
        if (menu==4){
           t=0;
           ifstream fin( "TrabalhoFinal.txt" );
           string l1,l2,l3;
           while(getline(fin,v[t].nome)){
                getline(fin,v[t].telefone);
                getline(fin,v[t].email);
                t++;
                 cout <<l1<<" "<<l2<< " "<<l3<< "\n";
                }
           fin.close();
           }
        if (menu==5){
            break;
        }
    }
}
