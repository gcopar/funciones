//Ejercicio 04: Generacion de Numeros Aleatorios con cstdlib
//Nombre: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int numeroMagico = rand() % 100 + 1;
    int intento;

    cout<<"Adivina el numero magico (1-100): ";
    while (true)
    {
        cin>>intento;
        if(intento > numeroMagico){
            cout<<"Muy alto. Intenta de nuevo: "<<endl;
        }else if(intento < numeroMagico){
            cout<<"Muy bajo. Intenta de nuevo: "<<endl;
        }else{
            cout<<"El numero magico es menor."<<endl;
            break;
        }
    }
    return 0;
}