//EJERCICIO 05: FUNCIO CALCULAR RAICES
//NOMBRE: Gustavo Mario de la Cruz Copa Romero
//CODIGO: 2021-177006

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void calcularRaices(int a, int b, int c, float &x_1, float &x_2, float &preal, float &pimgn, char &tipo_raices){
    int discr;

    discr = pow(b, 2) - 4*a*c;

    if (discr > 0)
    {
        x_1 = (-b + sqrt(discr)) / (2*a);
        x_2 = (-b - sqrt(discr)) / (2*a);
        tipo_raices = 'R';
    }else if (discr == 0)
    {
        x_1 = -b / (2*a);
        tipo_raices = 'U';
    }else{
        preal = -b / (2*a);
        pimgn = sqrt(abs(discr)) / (2*a);
        tipo_raices = 'I';
    }
}


int main(){
    int a, b, c;
    float x_1 = 0 , x_2 = 0, preal = 0, pimgn = 0;
    char tipo_raices = 'N', control = 'Y';

    while (control == 'Y')
    {
        cout<<"Ingrese el coeficiente de x^2: "; cin>>a;
        cout<<"Ingrese el coeficiente de x: "; cin>>b;
        cout<<"Ingrese la constante: "; cin>>c;

        calcularRaices(a, b, c, x_1, x_2, preal, pimgn, tipo_raices);

        switch (tipo_raices)
        {
        case 'R':
            cout<<"RAICES REALES: "<<a<<b<<c<<endl;
            cout<<"\t - x_1 = "<<x_1<<endl;
            cout<<"\t - x_2 = "<<x_2<<endl;
            break;
        case 'U':
            cout<<"RAIZ REAL: "<<a<<b<<c<<endl;
            cout<<"\t - x_1 = "<<x_1<<endl;
            break;
        case 'I':
            cout<<"RAICES COMPLEJAS: "<<a<<b<<c<<endl;
            cout<<"\t - x_1 = "<<preal<<" + "<<pimgn<<"i"<<endl;
            cout<<"\t - x_2 = "<<preal<<" - "<<pimgn<<"i"<<endl;
            break;
        default:
            break;
        }

        cout<<"¿Quiere calcular otra ecuacion cuadratica? (Y/N): "; cin>>control;     // Controlador muy simple  
    }

    return 0;
}

