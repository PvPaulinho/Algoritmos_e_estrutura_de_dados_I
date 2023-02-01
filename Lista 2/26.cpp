#include <iostream>
#include <conio.h>
using namespace std;
long fat (long n){
    if (n==0){
        return 1;
    }
    return n*fat(n-1);
}
int main(){
    long n;
    cout<< "Digite um numero: ";
    cin>>n;
    long f;
    f=fat(n);
    cout<< "\nO fatorial de "<<n<< " e: "<<f;
getch();}
