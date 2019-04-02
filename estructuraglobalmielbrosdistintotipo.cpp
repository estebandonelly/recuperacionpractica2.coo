// 1-Diseñe una función que permita recorrer una estructura (struct) con un mismo puntero,

//   la estructura debe tener los siguientes miembros y en ese orden en particular:

// un miembro tipo double

//  un miembro tipo char

//  un miembro tipo float

//  un mimbro tipo char

//  un miembro tipo double

//  un miembro tipo int.

//  La función debe recibir como parametros de entrada los valores para inicializar los miembros

//  de la estructura. Luego, con un mismo puntero y con ayuda de type casting se debe acceder a

//  los miembros de la estructura e imprimir su valor en pantalla.







//2- Re-diseñe la función del ejercicio anterior pero esta vez solo puede utilizar type casting

 //  y aritmetica de punteros.





#include <iostream>

using namespace std;



struct FooStruct

{

    double a = 456.123;

    char b = 'a';

    float c= 3.5;

    char d = 'x';

    double e= 123.789;

    int f = 123;



};



int main()

{

    FooStruct strucx;



    FooStruct *puntero = &strucx;



    cout<<"imprimir en pantalla el valor de sus miembros haciendo uso del operador ->"<<endl;



    cout<<"el double a: "<<puntero->a<<endl;

    cout<<"el char b: "<<puntero->b<<endl;

    cout<<"el float c: "<<puntero->c<<endl;

    cout<<"el char d: "<<puntero->d<<endl;

    cout<<"el double e: "<<puntero->e<<endl;

    cout<<"el int f: "<<puntero->f<<endl;



    cout<<"imprimir en pantalla el valor de sus miembros haciendo uso de type casting ->"<<endl;



    cout<<"el valor de a: "<<*((double*) &puntero)<<endl;

    cout<<"el valor de b: "<<*((char*) &puntero)<<endl;

    cout<<"el valor de c: "<<*((float*) &puntero)<<endl;

    cout<<"el valor de d: "<<*((char*) &puntero)<<endl;

    cout<<"el valor de e: "<<*((double*) &puntero)<<endl;

    cout<<"el valor de f: "<<*((int*) &puntero)<<endl;



    cout<<"Calcule el tamaño de cada estructura con la funcion sizeof() ->"<<endl;



    cout<<"el tamaño de la estructura es: "<<sizeof (int)<<endl;

    }
