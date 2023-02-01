#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    float a1[5],a2[5],t1=0,t2=0,med1,med2;
    for (int i=0;i<=4;i++){
        cout<< "De a nota para o primeiro atletas: ";
        cin>>a1[i];
        cout<< "De a nota para o segundo atleta: ";
        cin>>a2[i];
        t1 = a1[i]+t1;
        t2 = a2[i]+t2;
    }
    med1 = t1/5;
    med2 = t2/5;
    if (med1>med2){
        cout<< "O primeiro atleta teve a nota media maior, sendo: "<<med1;
    }
    else
        cout<< "O segundo atleta teve a nota media maior, sendo: "<<med2;
    }
