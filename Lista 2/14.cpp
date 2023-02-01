#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int num,nl=0;
    cout<< "Digite o numero de convidados da festa: ";
    cin>>num;
    cin.ignore();
    string n[num];
    for (int i=0;i<num;i++){
        cout<< "Digite o nome completo de um convidado: ";
        getline(cin,n[i]);
    }
    cout<< "Lista de convidados:\n";
    for (int i=0;i<num-1;i++){
            for (int u=i+1;u<num;u++){
                if (n[i]>n[u]){
                    string l;
                    l=n[i];
                    n[i]=n[u];
                    n[u]=l;
                }
            }
    }
    for (int i=0;i<num;i++){
            nl++;
        cout<<nl<< "- " <<n[i]<< "\n";
    }
getch();}
