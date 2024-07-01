//EJERCICIO 04: CALCULO DE RAICES DE UNA ECUACION CUADRATICA
//NOMBRE: Gustavo Mario de la Cruz Copa Romero
//CODIGO: 2021-177006

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, discr;
    float x_1, x_2, preal, pimgn;

    cout<<"Ingrese el coeficiente de x^2: "; cin>>a;
    cout<<"Ingrese el coeficiente de x: "; cin>>b;
    cout<<"Ingrese la constante: "; cin>>c;

    discr = pow(b, 2) - 4*a*c;

    if (discr > 0)
    {
        x_1 = (-b + sqrt(discr)) / (2*a);
        x_2 = (-b - sqrt(discr)) / (2*a);

        cout<<"RAICES REALES: "<<endl;
        cout<<"\t - x_1 = "<<x_1<<endl;
        cout<<"\t - x_2 = "<<x_2<<endl;
    }else if (discr == 0)
    {
        x_1 = -b / (2*a);

        cout<<"RAIZ REAL: "<<endl;
        cout<<"\t - x_1 = "<<x_1<<endl;
    }else{
        preal = -b / (2*a);
        pimgn = sqrt(abs(discr)) / (2*a);

        cout<<"RAICES COMPLEJAS: "<<endl;
        cout<<"\t - x_1 = "<<preal<<" + "<<pimgn<<"i"<<endl;
        cout<<"\t - x_2 = "<<preal<<" - "<<pimgn<<"i"<<endl;
    }

    return 0;
}