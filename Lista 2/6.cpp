#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    float v1[5],v2[5],j=0;
    for (int i=0;i<=4;i++){
        cout<< "Digite um numero para o primeiro vetor: ";
        cin>>v1[i];
    }
    for (int i=0;i<=4;i++){
        cout<< "Digite um numero para o segundo vetor: ";
        cin>>v2[i];
    }
  for (int i=0;i<=4;i++){
        if (v1[i]==v2[i]);
        else
            j++;
  }
if(j==0)
    cout<< "Os vetores sao iguas.";
else
    cout<< "Os vetores nao sao iguais.";
getch();}
