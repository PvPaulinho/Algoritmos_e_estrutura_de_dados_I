#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n,x,i;
    for (i=1;i<=5;i++){
    cout<< "\nDigite um numero:";
    cin>>n;
    x=n%2;
        if(x==0){
            cout<< n<<" e par";
    }
        else{
            cout<< n<< " e impar";
            }
    }
getch();
}
