#include <iostream>
using namespace std;
int main(){
    int num1, num2, soma;
    cout << "\nDigite o primeiro numero ";
    cin >> num1;
    cout << "\nDigite o segundo numero ";
    cin >> num2;
    soma = num1 + num2;
    if(soma > 10){
    cout << "\nO resultado da soma dos dois numeros eh "<< soma <<'.'<<endl;
    }

}

