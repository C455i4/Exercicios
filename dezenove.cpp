#include <iostream>
using namespace std;

int main(){
    double num, metade;
    for(int i=0; i < 10;i++){
        cout <<"\nDigite um numero ";
        cin >> num;
        if(num>20){
        metade = num/2;
        cout << "\nA metade desse numero eh " << metade <<'.';
        }
    }
}
