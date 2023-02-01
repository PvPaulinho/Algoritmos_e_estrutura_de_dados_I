#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string p;
    char c;
    int n=0;
    cout<< "Digite uma frase: ";
    getline(cin,p);
    cout<< "Digite um caractere: ";
    cin>>c;
    for (int i=0;i<p.size();i++){
        if (c==p[i]){
            n++;
        }
    }
    cout<< "O caractere digitado aparece "<<n<< " vezes na frase.";
getch();}
