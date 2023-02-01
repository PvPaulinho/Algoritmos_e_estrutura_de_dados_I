#include<iostream>

using namespace std;
struct ponto{
    double x,y;
};

ponto medio(ponto p1, ponto p2){
    ponto p;
    p.x=(p1.x+p2.x)/2;
    p.y=(p1.y+p2.y)/2;
    return p;
}
int main(){
    while(1){
        ponto p1, p2;
        cout <<"\nInforme x e y do primeiro ponto:";
        cin>>p1.x>>p1.y;
        cout <<"\nInforme x e y do segundo ponto:";
        cin>>p2.x>>p2.y;

        ponto p = medio(p1,p2);

        cout << "\nPonto medio:"<<p.x<<","<<p.y;
        cout <<"\nDeseja continuar S-N:";
        char op;
        cin>>op;
        if(op=='N' || op=='n') break;
    }
}
