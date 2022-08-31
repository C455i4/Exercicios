#include <iostream>
using namespace std;
int main(){

    int num, cont, soma;
    double  media;

    cont = 0;
    soma = 0;


    do{
        cout <<"\nDigite um numero ";
        cin >> num;
        if(num % 3 == 0){
            cont++;
            soma = soma + num;
        }
    }while(num != 0 );
    media = soma / (cont - 1);

    cout <<"\nA media dos multiplos de 3 eh "<<media;
}
