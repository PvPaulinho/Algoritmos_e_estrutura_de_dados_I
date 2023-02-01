#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int v1[3][3],v2[3][3],s[3][3];
    for (int i=0;i<3;i++){
        for (int u=0;u<3;u++){
            cout<< "Digite os valores para a primeira matriz: ";
            cin>>v1[i][u];
        }
    }
    for (int i=0;i<3;i++){
        for (int u=0;u<3;u++){
            cout<< "Digite os valores para a segunda matriz: ";
            cin>>v2[i][u];
        }
    }
    for (int i=0;i<3;i++){
        for (int u=0;u<3;u++){
            s[i][u]=v1[i][u]+v2[i][u];
            cout<<s[i][u]<< " ";
        }
        cout<< "\n";
    }
}
