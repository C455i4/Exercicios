#include <iostream>
using namespace std;

int main(){
    int idade;
    cout <<"\nDigite sua idade ";
    cin >>  idade;

    if(idade < 16){
        cout << "\nNão eleitor ";
    }else if ((idade >= 16 && idade < 18) || idade >= 65 ){
        cout << "\nEleitor facultativo ";
    }else if (idade >= 18 || idade < 65){
        cout << "\nEleitor obrigatorio ";
    }
}
