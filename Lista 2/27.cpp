#include <iostream>
#include <conio.h>
using namespace std;
int cont=0,nl=0;
string num;
int imprimemenu(int x){
    cout<< "\nDigite 1 para inserir um numero.\nDigite 2 para ver os numeros informados.\nDigite 3 para sair.\n";
    cin>>x;
    return x;
}
void numero(string & num){
    cout<< "\nDigite um numero: ";
    cin>>num[cont];
}
void listanumeros(){
    for (int i=0;i<cont;i++){
            nl++;
            cout<< "\nNumero "<<nl<< ": "<<num[i]<< "\n" ;
    }
}
int main(){
    int nmenu,x;
    for (int i=0;i>-1;i++){
        nmenu=imprimemenu(x);
        if (nmenu==1){
            numero(num);
            cont++;
        }
        if (nmenu==2){
                listanumeros();
            }
        nl=0;
        if (nmenu==3){
            break;
        }
    }
getch();
}
