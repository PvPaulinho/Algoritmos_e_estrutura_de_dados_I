#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    float aci=1.50,aji=1.10,acf,ajf,x;
    for (x=1;x>0;x++){
        if (acf>ajf){
            acf=aci+0.01*x;
            ajf=aji+0.04*x;
        }
        else if (acf<ajf){
            break;
        }
    }
    cout<< "Serao nescessarios "<<x<< " anos para Juca ser maior que Chico.\nAltura de Chico vai ser "<<acf<< " e a de Juca vai ser "<<ajf<< ".";
getch();}
