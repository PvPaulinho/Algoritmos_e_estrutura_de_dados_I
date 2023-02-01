#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float n;
    cout<< "Digite um numero:";
    cin>>n;
    if (n<10){
    cout<< "menor que 10";
    }
    else if(n==10){
    cout<< "igual a 10";
    }
    else{
    cout<< "maior que 10";
    }
getch();
}
