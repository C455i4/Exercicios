#include <iostream>
using namespace std;

int main(){
    int n,quad;

    n = 15;

    do{
        quad = n * n;
        n = n+ 1 ;
        cout << quad <<' ';
    }while (n <201);
}

