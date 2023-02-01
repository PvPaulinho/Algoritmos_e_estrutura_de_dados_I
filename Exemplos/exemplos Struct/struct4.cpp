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
    for (int a=0;a<t-1;a++){
        for (int b=a+1;b<t;b++){
            if (v[a].nome>v[b].nome){
                pessoa x;
                x=v[a];
                v[a]=v[b];
                v[b]=x;
            }
        }
    }
    int n=1;
    for (int i=0;i<t;i++){
        cout<< "\n" <<n<< "- " <<"Nome: " <<v[i].nome<< "\nIdade: " <<v[i].idade << "\n";
        n++;
    }
getch();}
