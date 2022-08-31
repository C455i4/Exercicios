#include <iostream>
using namespace std;

int main(){
    double valor, rea, novo;
    cout << "\nDigite o valor a ser reajustado ";
    cin >> valor;

    rea = valor * 0.10;
    novo = rea + valor;
    cout << "\nSeu salario com reajuste é "<< novo <<'.'<<endl;
}
