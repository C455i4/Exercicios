#include <iostream>
using namespace std;

int main(){
    int n, maior,menor;
    maior = 0;
    menor= 0;
    do{
        cout <<"\nDigite os numeros ";
        cin >> n;
        if(n > maior){
            maior = n;
        }else{
            menor = n;
        }
        }while(n > 0);
    cout <<"\nO maior numero eh " <<maior;
    cout <<"\nO menor numero eh " <<menor;

}

