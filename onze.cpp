#include <iostream>
using namespace std;
int main(){
    int a, b ,aux;
    cout << "\Digite o valor de a: ";
    cin >> a;
    cout << "\Digite o valor de b: ";
    cin >> b;
    aux=a;
    a=b;
    b=aux;
    cout << "\nO valor de a é "<< a;
    cout << "\nO valor de b é "<< b;

}
