#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    string p;
    cout<< "Digite uma palavra: ";
    cin>>p;
    for (int i=p.size()-1;i>=0;i--){
        cout<< p[i];
    }
getch();
}

