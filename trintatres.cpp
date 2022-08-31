#include <iostream>
using namespace std;

int main(){
    string nome;
    double nota1, nota2, media,soma, media2;
    int cont;
    cont =0;
    soma = 0;

    for(int i =1; i < 16;i++){
        cout << "\nDigite o nome do aluno ";
       // std::getline(std::cin, nome);
       cin >> nome;
        cout << "\nDigite a nota da prova 1 ";
        cin >> nota1;
        cout << "\nDigite a nota da prova 2 ";
        cin >> nota2;
        media = (nota1 + nota2)/2;
        soma  = soma + nota1 + nota2;
        cout <<"\nA media do aluno " <<nome << " eh "<< media;
    }
    media2 = soma/15;
    cout <<"\nA media da turma eh "<<media2;




}
