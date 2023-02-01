#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float num1,num2;
    cout<< "Digite um numero:";
    cin>>num1;
    cout<< "Digite um numero:";
    cin>>num2;
    float div1,div2;
    div1= num1/num2;
    div2= num2/num1;
    cout<< "div1="<<div1<< "\ndiv2="<<div2;
getch();
}
