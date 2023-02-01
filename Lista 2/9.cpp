#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int v1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},v2[3],c=0;
    for (int i=0;i<=2;i++){
        cout<< "Informe um numero: ";
        cin>>v2[i];
    }
    for (int i=0;i<=14;i++){
        for (int j=0;j<=2;j++){
            if (v2[j]==v1[i])
                c++;
        }
    }
    if (c==3)
        cout<< "O segundo vetor esta contido dentro do primeiro vetor.";
    else
        cout<< "O segundo vetor nao esa contido dentro do primeiro vetor.";
getch();}
