#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    float n[10],ma,me,t=0,med;
    for (int i=0;i<=9;i++){
        cout<< "Digite um numero: ";
        cin>>n[i];
    }
        ma = n[0];
        me = n[0];
      for (int i=0;i<=9;i++){
        if (ma<n[i]){
            ma = n[i];
        }
        if (me>n[i]){
            me = n[i];
        }
        t = n[i]+t;
    }
    med = t/10;
    cout<< "O maior e: "<<ma<< "\nO menor e: "<<me<< "\nA media entre eles e: "<<med;
getch();}
