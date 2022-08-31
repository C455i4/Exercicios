#include <iostream>
using namespace std;

int main(){
    double n,soma, media,cont;
    cont=0;
    soma= 0;
    while(n > 0){
        cout <<"\nDigite os numeros ";
        cin >> n;
        cont++;
        soma = soma + n;
    }
    media = (soma - n) /(cont - 1);
    cout << "\nA soma eh "<<soma - n;
    cout << "\nA media eh "<<media;
    cout << "\nTotal de valores lidos "<<cont - 1;
}
