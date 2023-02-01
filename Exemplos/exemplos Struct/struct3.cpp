#include <iostream>
#include <conio.h>
using namespace std;
struct ponto {
    double x;
    double y;
};
ponto medio (ponto a, ponto b){
    ponto p;
    p.x = (a.x+b.x)/2;
    p.y = (a.y+b.y)/2;
    return p;
}
int main(){
    ponto z,w,r;
    z.x=8;z.y=3;w.x=10;w.y=20;
    r=medio(z,w);
    cout<<r.x<< ", "<<r.y;
getch();}
