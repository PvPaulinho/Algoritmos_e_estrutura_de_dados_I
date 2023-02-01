#include <iostream>
#include <conio.h>
using namespace std;
int par (int i){
    if (i%2==0)
        return 1;
    else
        return 0;
}
int main(){
    int p;
    for (int i=1;i<=600;i++){
            p = par(i);
            if (p==1)
                cout<<i<< " e par.\n";
    }
getch();}
