#include <iostream>
using namespace std;

int main(){
    int numH, salario, bruto,liqui;
    float  percen;
    cout << "\nDigite o número de horas trbalhadas no mês : ";
    cin >> numH;
    cout << "\nDigite o valor do salario hora: ";
    cin >> salario;
    cout << "\nDigite o percentual de desconto do INSS: ";
    cin >> percen;

    bruto = numH * salario;
    liqui = bruto - ((percen/100)*bruto);

    cout << "\nSeu salario bruto é: "<< bruto <<"\nSeu salario liquido é: " << liqui <<endl;
}
