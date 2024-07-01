//EJERCICIO 03: CALCULO DE LA HIPOTENUSA
//NOMBRE: Gustavo Mario de la Cruz Copa Romero
//CODIGO: 2021-177006

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int copuesto, cadyacente;
    float h;

    cout<<"Ingresa el cateto opuesto: "; cin>>copuesto;
    cout<<"Ingresa el cateto adyacente: "; cin>>cadyacente;
    
    h = sqrt(pow(copuesto, 2) + pow(cadyacente, 2));

    cout<<"La hipotenusa del triangulo rectangulo es: "<<h<<endl;

    return 0;
}