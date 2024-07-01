//Ejercicio 02: Paso por valor y por Referencia
//Nombre: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
using namespace std;

void porValor(int a){
   a = 10;
   cout<<"Dentro de porValor, a = "<<a<<endl;
}

void porReferencia(int &a){
   a = 10;
   cout<<"Dentro de porReferencia, a = "<<a<<endl;
}

int main(){
   int num = 5;
   cout<<"Antes de porValor, num = "<<num<<endl;
   porValor(num);
   cout<<"Despues de porValor, num = "<<num<<endl;
   
   cout<<"Antes de porReferencia, num = "<<num<<endl;
   porReferencia(num);
   cout<<"Despues de porReferencia, num = "<<num<<endl;
   
   return 0;
}
