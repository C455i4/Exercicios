#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace  std;

int main(){
    do{
    char adivinha;
    adivinha = rand() % 26 + 'a';
    int tentativas = 1;
    cout << "\n\nDigite uma letra 'a' e 'z':  "<< endl;
    char resp;
    while((resp=getch())!= adivinha){
        cout << resp << " � incorreto. Tente novamente"<< endl;
        tentativas++;
    }
    cout << resp <<"\n � CORRETO!!"
    << "\nVoc� acertou em "<<tentativas
    << "tentativas";
    cout <<

    "\nQuer jogar novamente? (s/n): ";
    }while(getche()=='s');
    cout <<"\nAt� logo e boa sorte!"<<endl;
}
