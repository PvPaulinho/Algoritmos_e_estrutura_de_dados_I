#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10},n,c=0;
    cout<< "Tente advinhar um numero do vetor: ";
    cin>>n;
    for (int i=1;i<5;i++){
        for (int j=0;j<=9;j++){
                    if (n==v[j]){
                        c++;
                    }
                }
        if (c==0){
            cout<< "Voce errou. Tente mais uma vez.\n";
            cin>>n;
        }
        }
        if (c==0)
            cout<< "Voce nao conseguiu acertar nenhum numero nas 5 tentativas.";
        if (c>0)
            cout<< "Voce acertou.";
getch();}
