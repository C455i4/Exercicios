#include <iostream>
using namespace std;

int main(){
    int dia1, mes1, ano1, dia2, mes2,ano2,idad ;
    char barra1, bar1, barra2, bar2;
    cout <<"\nDigite sua data de nascimento nesse formato DD/MM/AAAA ";
    cin >> dia1 >> barra1 >> mes1 >> bar1 >> ano1;
    cout <<"\nDigite a data de hoje ";
    cin >> dia2 >> barra2 >> mes2 >> bar2 >> ano2;
    idad = ano2 - ano1;

        if(dia2 > dia1 && mes2 > mes1){
            cout << "\nSua idade eh "<< idad + 1 << '.' <<endl;
        }else if(dia2 < dia1 && mes2 < mes1){
            cout << "\nSua idade eh "<< idad - 1<< '.' <<endl;
        }else{
             cout << "\nSua idade eh "<< idad << '.' <<endl;
        }
}
