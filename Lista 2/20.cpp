#include <iostream>
#include <conio.h>
using namespace std;
double perimetro (double b, double a){
    double p = 2*(b+a);
    return p;
}
double area (double b, double a){
    double ar = b*a;
    return ar;
}
int main(){
    double a,b,per,are;
    cout<<"Entre com valor da base e  da altura: ";
    cin>> b >> a;
    per = perimetro(b,a);
    are = area(b,a);
    cout<< "\nO valor do perimetro e: " <<per<< "\nO valor de area: " <<are;
getch();}


