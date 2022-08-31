#include <iostream>
using namespace std;

int main(){
    int n, soma;
    soma = 0;
    n = 1;
    do{
        soma = soma + n;
        n = n+1;
    }while(n<101);
    cout << soma;
}

