#include <iostream>
#include <conio.h>
using namespace std;
int ordem (int a,int b){
    if (a>b)
        return 1;
    else  if(a<b)
        return 2;
    else
        return 3;
}
int main(){
    int a,b,o;
    cout<< "Digite dois numeros: ";
    cin>> a >>b;
    o = ordem(a,b);
    if (o==1)
        cout<< "A ordem crescente entre ele e: "<<b<< " e "<<a;
    if (o==2)
        cout<< "A ordem crescente entre ele e: "<<a<< " e "<<b;
    if (o==3)
        cout<< "A ordem crescente entre ele e: "<<b<< " e "<<a;
getch();}
