#include<iostream>

using namespace std;
struct boi{
    string nome;
    int idade;
    double peso;
};



int main(){
    boi v[1000];
    int c=0;

    while(1){
         int op;
         cout << "\n\n\n1-Inserir\n2-Buscar\n3-Listar\n4-Sair\n";
         cin >> op;
         if(op==1){
             cin.ignore();
             cout << "\nNome:" ;
             getline(cin,v[c].nome);
             cout << "\nIdade:" ;
             cin >> v[c].idade;
             cout << "\nPeso:" ;
             cin >> v[c].peso;
             c++;
         }
         if(op==2){
             int achei =0;
             string aux;
             cout << "\nNome:" ;
             cin >> aux;
             for(int i=0; i<c; i++){
                 if(aux==v[i].nome){
                     achei = 1;
                     cout << "\n\nNome:"<< v[i].nome;
                     cout << "\nIdade:" << v[i].idade;
                     cout << "\nPeso:" << v[i].peso;
                 }
             }
             if(achei==0) cout << "\nNao encontrado";
         }
         if(op==3){
             for(int i=0; i<c; i++){
                     cout << "\n\nNome:"<< v[i].nome;
                     cout << "\nIdade:" << v[i].idade;
                     cout << "\nPeso:" << v[i].peso;
             }
         }
         if(op==4){
             break;
         }
    }

}


