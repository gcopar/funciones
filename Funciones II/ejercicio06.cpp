//EJERCICIO 06: JUEGO PIEDRA, PAPEL O TIJERA
//NOMBRE: Gustavo Mario de la Cruz Copa Romero
//CODIGO: 2021-177006

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int manopc = 0;
int contadorh = 0;
int contadorpc = 0;

void IA(){
    srand(time(0));
    int manopc = 1 + rand() % (3 + 1);
}

void reglas_juego(int manopc, int manoh, int contadorh, int contadorpc){
        cout<<manopc;
        cout<<manoh;
    switch (manoh)
    {
    case 1:
        switch (manopc)
        {
        case 2:
            contadorpc=1;
            break;
        case 3:
            contadorh=3;
            break;
        }
        break;
    case 2:
        switch (manopc)
        {
        case 1:
            contadorh++;
            break;
        case 3:
            contadorpc++;
            break;
        }
        break;
    case 3:
        switch (manopc)
        {
        case 1:
            contadorpc++;
            break;
        case 2:
            contadorh++;
            break;
        }
        break;
    default:
        cout<<"Error";
        break;
    }
    cout<<"Puntos jugador: "<<contadorh<<endl;
    cout<<"Puntos IA: "<<contadorpc<<endl;
}

void menu(){
    int manoh;
    do
    {
        cout<<"Elige tu mano de entre las opciones: "<<endl;
        cout<<"\t 1) Piedra"<<endl;
        cout<<"\t 2) Papel"<<endl;
        cout<<"\t 3) Tijera"<<endl;
        cin>>manoh;

        IA();

        reglas_juego(manopc, manoh, contadorh, contadorpc);
        
        cout<<"Puntos jugador: "<<contadorh<<endl;
        cout<<"Puntos IA: "<<contadorpc<<endl;

    } while (contadorh != 3 or contadorpc != 3);
}

int main(){
    cout<<"\t\tJUEGO PIEDRA, PAPEL TIEJERA \n";
    menu();
    return 0;
}