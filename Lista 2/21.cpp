#include <iostream>
#include <conio.h>
using namespace std;
float conv(float c){
    float f;
    f=c*1.8+32;
    return f;
}
int main(){
    float c;
    cout<< "Digite a temperatura em celsius: ";
    cin>>c;
    float f;
    f=conv(c);
    cout<< "A temperatura "<<c<< " em celsius e igual a: "<<f<< " em fahrenheit.";
getch();}
