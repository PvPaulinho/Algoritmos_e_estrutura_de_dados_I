#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int v[15],n,vn[15];
    for (int i=0;i<=14;i++){
        cout<< "Digite 1 numero para o vetor: ";
        cin>>v[i];
    }
    cout<< "Digite um numero para multiplicar os numeros do vetor: ";
    cin>>n;
    for (int i=0;i<=14;i++){
        vn[i] = n*v[i];
    cout<<vn[i]<< "\n";
    }
}
