#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,x;
    cout<< "Digite um numero:";
    cin>>n;
    x=n%2;
        if(x==0){
            cout<< n<<" e par";
    }
        else{
            cout<< n<< " e impar";
            }
getch();
}
