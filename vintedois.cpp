#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"\nDigite um numero ";
    cin >> num;

    if(num == 20){
        cout << "\nNumero igual a 20 ";
    }else if(num > 20){
        cout << "\nNumero maior que 20 ";
    }else{
        cout << "\nNumero menor que 20";
    }
}
