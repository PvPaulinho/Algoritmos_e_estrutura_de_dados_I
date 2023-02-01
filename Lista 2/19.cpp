#include <iostream>
#include <conio.h>
using namespace std;
int soma(int a,int b){
int x = a+b;
return x;
}
int subtracao(int a,int b){
    int y = a-b;
    return y;
}
int multiplicacao(int a,int b){
   int z = a*b;
    return z;
}
int modulo (int a,int b){
    int w = a%b;
    return w;
}

int main(){
    int a,b,so,sub,mult,mod;
    cout<<"Digite 2 numeros inteiros: ";
    cin>> a >> b;
    so = soma(a,b);
    sub = subtracao(a,b);
    mult = multiplicacao(a,b);
    mod = modulo (a,b);
    cout<<"\nO valor da soma e: " <<so<<"\nO valor da subtracaoo e: " <<sub<<"\nO valor da multiplicacao e: " <<mult<<"\nO valor do modulo e: " <<mod;
getch();}



