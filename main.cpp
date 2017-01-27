#include "Evaluador.h"
#include <iostream>
#include <climits>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    int total;
    total= a+b;
    return total;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    int total;
    total = a - b;
    return total;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    int total;
    total = a*b;
    return total;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    int total;
    total = a/b;
    return total;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    int mayor;
    if(a>b){
        mayor=a;
    }else{
        mayor=b;
    }
    return mayor;
}

//Devuelve el numero menor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    int menor;
    if(a<b){
        menor=a;
    }else{
        menor=b;
    }
    return menor;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int mayor;
    if(a>b && a>c){
        mayor=a;
    }else if(b>c){
        mayor=b;
    }else{
        mayor=c;
    }
    return mayor;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion] = valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int valor;
    valor = arreglo[posicion];
    return valor;
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor = INT_MIN;
    for(int i=0;i<tamano;i++){
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }
    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor = INT_MAX;
    for(int i=0;i<tamano;i++){
        if(arreglo[i]<menor){
            menor=arreglo[i];
        }
    }
    return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int contador=0;
    int promedio;
    int suma=0;
    for(int i=0;i<tamano;i++){
        suma+=arreglo[i];
        contador++;
    }
    promedio = suma/contador;
    return promedio;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
