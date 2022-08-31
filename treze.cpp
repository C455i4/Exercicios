#include <iostream>
using namespace std;

int main(){
    int telefone;
    string nome, ende;

    cout << "\nDigite o seu nome";
    std::getline(std::cin, nome);
    cout << "\nDigite o seu endereço";
    std::getline(std::cin, ende);
    cout <<"\nDigite o seu telefone";
    cin >> telefone;

    cout << "\nSEu nome é "<< nome << '.' << "\nSeu endereço é "<< ende <<'.'<<"\nSeu número de telefone é "<<telefone<<'.'<<endl;

}
