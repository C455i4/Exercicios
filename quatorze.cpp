#include <iostream>
using namespace std;

int main(){
    string nome;
    int idade;
    char sexo;
    cout << "\nDigite seu nome completo: ";
    std::getline(std::cin, nome);
    cout << "\nDigite sua idade: ";
    cin >> idade;
    cout << "\nDigite (f) para sexo feminino e (m) para masculino: ";
    cin >>sexo;

    if(sexo == 'f' && idade<25){
        cout << nome <<"\n ACEITA!!";
    }else{
    cout << "\nNAO ACEITA";
    }
}
