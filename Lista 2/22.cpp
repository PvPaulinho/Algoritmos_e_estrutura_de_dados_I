#include <iostream>
#include <conio.h>
using namespace std;
bool multiplo (int n){
    int m;
    m = n%5;
    if (m==0)
        return true;
    else
        return false;
}
int main (){
    int n;
    cout<< "Digite um numero: ";
    cin>>n;
    bool mult;
    mult = multiplo(n);
    if (mult==true)
        cout<<n<< " e multiplo de 5.";
    if (mult==false)
        cout<<n<< " nao e multiplo de 5.";
getch();}
