#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string n[10];
    int nl=0;
    for (int i=0;i<=9;i++){
        cout<< "Digite um nome: ";
        getline(cin,n[i]);
    }
    for (int i=0;i<9;i++){
        for (int u=i+1;u<10;u++){
            if (n[i]>n[u]){
                string l;
                l=n[i];
                n[i]=n[u];
                n[u]=l;
            }
        }
    }
    for (int i=0;i<=9;i++){
            nl++;
        cout<<nl<< "- " <<n[i]<< "\n";
    }
    getch();
}

























/*
    for (int i=0;i<9;i++){
        for (int u=i+1;u<10;u++){
            if (n[i]>n[u]){
                string l;
                l=n[i];
                n[i]=n[u];
                n[u]=l;
            }
        }
    }
    for (int i=0;i<=9;i++){
        cout<<n[i]<< "\n";
    }



    */
