#include <iostream>
using namespace std;

int main(){
    int idade,cont1, soma1, media1,cont2,soma2,media2,cont3,soma3,media3,cont4,soma4,media4;
    double peso;
    cont1 = 0;cont2 = 0;cont3 = 0; cont4 = 0;
    soma1 = 0;soma2 = 0;soma3 = 0; soma4 = 0;

    for(int i=1; i < 7; i++){
        cout <<"\nDigite a idade ";
        cin >> idade;
        cout <<"\nDigite o peso ";
        cin >> peso;
        if(idade <=10){
            cont1 ++;
            soma1 = soma1 + peso;
        }
        if(idade> 10 && idade <21){
            cont2++;
            soma2 = soma2 + peso;
        }
        if(idade> 20 && idade < 31){
            cont3++;
            soma3 = soma3 + peso;
        }
        if(idade > 30){
            cont4++;
            soma4 = soma4 + peso;
        }
    }
    media1 = soma1/cont1;
    media2 = soma2/cont2;
    media3 = soma3/cont3;
    media4 = soma4/cont4;

    cout <<"\nMedia dos pesos na faixa etaria de 1 a 10 anos e "<< media1;
    cout <<"\nMedia dos pesos na faixa etaria de 11a 20 anos e "<< media2;
    cout <<"\nMedia dos pesos na faixa etaria de 21 a 30 anos e "<< media3;
    cout <<"\nMedia dos pesos na faixa etaria maior que 30 anos "<< media4;
}

