#include<iostream>
using namespace std;
int main (){
    int x,n,e=1;
    cout<< "Digite um numero inteiro: ";
    cin>>x;
    cout<< "Digite um numero inteiro nao-negativo: ";
    cin>>n;
    for (int i=1;i<=n;i++){
            e=e*x;
    }
    cout<<x<< " elevado a "<<n<< " e igual a: "<<e;
}
