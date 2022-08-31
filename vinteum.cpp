#include <iostream>
using namespace std;

int main(){
    double salario, prest, aux;
    cout << "\nDigite o salario ";
    cin >> salario;
    cout << "\nDigite a prestacao ";
    cin >> prest;

    aux = (20 * salario)/100;
    if(prest > aux){
        cout << "\nEmprestimo nao pode ser concedido";
    }else{
        cout << "\nEmprestimo pode ser concedido";
    }

}
