#include <iostream>
using namespace std;

int main(){
    int inf, sup, soma, n;
    cout <<"\nDigite  o limite inferior ";
    cin >> inf;
    cout <<"\nDigite  o limite superior ";
    cin >> sup;
    soma = 0;

    if (inf % 2== 0){
        n = inf;
        do {
            cout << n << ' ';
            soma = soma + n;
            n = n+2;
        }while (n <= sup);
    }else{
        n = inf + 1;
        do{
            cout << n << ' ';
            soma = soma + n;
            n = n + 2;
        }while(n<= sup);
    }

    cout << "\nO somatorio eh "<< soma << endl;
}
