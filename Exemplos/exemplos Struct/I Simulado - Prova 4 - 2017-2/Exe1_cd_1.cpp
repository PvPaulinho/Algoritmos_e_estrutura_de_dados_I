#include<iostream>
using namespace std;
struct cd{
    string titulo;
    string autor;
    int ano;
};



int main(){
    cd v[1000];
    int c=0;

    while(1){
         int op;
         cout << "\n\n\n1-Inserir\n2-Listar\n3-Procurar\n4-Sair\n";
         cin >> op;
         if(op==1){
             cin.ignore();
             cout << "\nTitulo:" ;
             getline(cin,v[c].titulo);
             cout << "\nautor:" ;
             getline(cin,v[c].autor);
             cout << "\nAno:" ;
             cin >> v[c].ano;
             c++;
         }
         if(op==2){
             for(int i=0; i<c; i++){
                 cout << "\n\nTitulo:"<< v[i].titulo;
                 cout << "\nautor:" << v[i].autor;
                 cout << "\nAno:" << v[i].ano;
             }
         }
         if(op==3){
             string aux;
             cout << "\nTitulo:" ;
             cin.ignore();
             getline(cin , aux);
             for(int i=0; i<c; i++){
                 if(aux == v[i].titulo){
                     cout << "\n\nTitulo:"<< v[i].titulo;
                     cout << "\nautor:" << v[i].autor;
                     cout << "\nAno:" << v[i].ano;
                 }
             }
         }
         if(op==4){
             break;
         }
    }

}


