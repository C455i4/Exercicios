#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "\nDigite um numero ";
    cin >> n;

    if (n % 10 == 0){
        cout <<"\n Esse numero é divisivel por 10, 5 e 2 ";
    }else if(n % 5 == 0){
        cout <<"\n Esse numero é divisivel por 5 ";
    }else if(n % 2 == 0 ){
        cout <<"\n Esse numero é divisivel por 2 ";
    }else {
        cout <<"\n Esse numero nao é divisivel por 10, 5 e 2 ";
    }

}
