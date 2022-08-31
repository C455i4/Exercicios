#include <iostream>
using namespace std;

int main(){
    int tempo, velo , dista,gasto;

    cout << "\nDigite o tempo: ";
    cin >> tempo;
    cout << "\nDigite a velocidade: ";
    cin >> velo;
    dista = velo * tempo;
    gasto = dista / 12;
    cout << "\nVC gastou "<< gasto<<" litros de gasosa"<<endl;

}
