#include <iostream>
using namespace std;

int main(){
    int telefone;
    string nome, ende;

    cout << "\nDigite o seu nome";
    std::getline(std::cin, nome);
    cout << "\nDigite o seu endere�o";
    std::getline(std::cin, ende);
    cout <<"\nDigite o seu telefone";
    cin >> telefone;

    cout << "\nSEu nome � "<< nome << '.' << "\nSeu endere�o � "<< ende <<'.'<<"\nSeu n�mero de telefone � "<<telefone<<'.'<<endl;

}
