#include <iostream>
#include <conio.h>
using namespace std;
int maior(int a,int b,int c){
    if((a>b)&&(a>c))
        return a;
    if ((b>a)&&(b>c))
        return b;
    if((c>a)&&(c>b))
        return c;
}
int main(){
    int a,b,c,m;
    cout<<"Entre com 3 numeros: ";
    cin>>a>>b>>c;
    m = maior(a,b,c);
    cout<<"O maior entre eles e: "<<m;
getch();}



