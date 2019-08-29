#include <iostream>
#include <time.h>
#include <Operaciones.h>

using namespace std;
int main() {
    int matriz[10000][10000], filas , columnas;
    cout<<"Digite el numero de filas";
    cin>>filas;
    cout<<"Digiste el numero de columnas";
    cin>>columnas;

    for(int i=0; i<filas ; i++){
        for(int j=0; j<columnas; j++){
                matriz=[i][j]=1+rand() % 50;
        }
    }


    return 0;
}