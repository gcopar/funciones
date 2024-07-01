//EJERCICIO 01: CALCULO DEL AREA DE UN CIRCULO
//NOMBRE: Gustavo Mario de la Cruz Copa Romero
//CODIGO: 2021-177006

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float radio, resultado;

    cout<<"Ingrese el radio de circulo: "; cin>>radio;
    resultado = M_PI * pow(2, radio);

    cout<<"El area del circulo es: "<<resultado<<endl;

    return 0;
}