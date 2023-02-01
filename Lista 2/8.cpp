#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string p;
    cout<< "Digite uma palavra: ";
    cin>>p;
    for (int i=0;i<p.size()-1;i++){
            for (int u=i+1;u<p.size();u++){
                if (p[i]>p[u]){
                    char l;
                    l=p[i];
                    p[i]=p[u];
                    p[u]=l;
                }
            }
    }
    for (int i=0;i<p.size();i++){
        cout<<p[i];
    }
getch();}
