#include <iostream>
using namespace std;

int main(){
    int idade,cont,cont2;
    cont = 0;
    cont2 = 0;

    do{
        cout <<"\nDigite a idade e -1 para parar ";
        cin >> idade;
        if(idade < 21){
            cont ++;
        }
        if(idade > 50){
            cont2++;
        }
    }while(idade != -1);
    cout<<"\nO numero de pessoas com idade menor que 21 anos eh "<<cont - 1;
    cout<<"\nO numero de pessoas com idade maior que 50 anos eh  "<<cont2;

}
