#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,x,y,z;
    cout<< "Digite um ano:";
    cin>>n;
    x=n%4;
    y=n%100;
    z=n%400;
    if(x==0&&y!=0){
       cout<<x<< " e bissexto";
    }
       else if(z==0){
        cout<<n<< " e bissexto";
       }
       else{
        cout<<n<< " nao e bissexto";
       }
getch();
}
