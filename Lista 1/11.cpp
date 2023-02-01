#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,x,nfat;
    cout<< "Digite um numero:";
    cin>>n;
    nfat=1;
    for (x=1;x<=n;x++){
    nfat=nfat*x;}
    cout<< "n!="<<nfat;
getch();
}
