#include <iostream>
using namespace std;

int main(){
    double preco, novop;
    cout << "\nDigite o preço do produto ";
    cin >> preco;
    novop = preco - (preco * 0.09);
    cout << "\nSeu novo preço com desconto é "<< novop << endl;
}
