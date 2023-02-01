#include <iostream>
#include <conio.h>
using namespace std;
int quadrado (int i){
    int q = i*i;
    return q;
}
int main(){
    int quad;
    for (int i=0;i<=20;i++){
        quad = quadrado(i);
        cout<<"O quadrado de "<<quad<< "\n";
    }
getch();}


