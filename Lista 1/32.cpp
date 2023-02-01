#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,ni=0,x;
    for (x=0;x>=0;x++){
        cout<< "Digite um numero: ";
        cin>>n;
          if (n>100&&n<200){
        ni++;
            }
            else if (n==0){
            break;
        }
            }
    cout<< "Foram digitaos " << ni<< " numeros entre 100 e 200.";
getch();}
