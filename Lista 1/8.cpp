#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float b,h,p,a;
    cout<< "Digite a base do retangulo:";
    cin>>b;
    cout<< "Digite a altura do retangulo:";
    cin>>h;
    p=2*(b+h);
    a=b*h;
    cout<< "Perimetro do retangulo= "<<p<< "\nArea do retangulo= "<<a;
getch();
}
