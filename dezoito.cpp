#include <iostream>
using namespace std;

int main(){
    double preco, novop;
    cout << "\nDigite o pre�o do produto ";
    cin >> preco;
    novop = preco - (preco * 0.09);
    cout << "\nSeu novo pre�o com desconto � "<< novop << endl;
}
