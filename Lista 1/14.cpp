#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float a,b,o,soma,sub,mult,div,sair;
    cout<< "Digite um numero:";
    cin>>a;
    cout<< "Digite um numero:";
    cin>>b;
    while (o<5){
            cout<< "Digite 1 para somar.\nDigite 2 para sutrair.\nDigite 3 para multiplicar.\nDigite 4 para dividir.\nDigite 5 para sair.\n";
    cin>>o;
    soma=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    if (o==1){
        cout<< "O resultado e:"<<soma<<"\n";
    }
    else if (o==2){
        cout<< "O resultado e:"<<sub<<"\n";
    }
    else if(o==3){
        cout<< "O resultado e:"<<mult<<"\n";
    }
    else if(o==4){
        cout<< "O resultado e:"<<div<<"\n";
    }
    }
getch();
}
