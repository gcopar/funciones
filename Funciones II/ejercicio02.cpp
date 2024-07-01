//EJERCICIO 02: GENERADOR DE NUMEROS ALEATORIOS
//NOMBRE: Gustavo Mario de la Cruz Copa Romero
//CODIGO: 2021-177006

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int nummax, cantnum;


    cout<<"Ingresa la cantidad de numeros aleatorios que desee generar: "; cin>>cantnum;
    cout<<"Ingresa el valor maximo que podra salir en un numero aletorio: "; cin>>nummax;



    for (int i = 1; i <= cantnum; i++)
    {
        int numaletorio = rand() % (nummax + 1); 
        cout<<"\t- "<<i<<" numero aleatorio: "<<numaletorio<<endl;
    }
    
    return 0;
}