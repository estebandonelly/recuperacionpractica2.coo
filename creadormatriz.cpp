//3. Diseñe una función que recibe como parámetros dos dimensiones M y N. Además la función recibe
//   un parametro booleano. Con ayuda de los operadores new y delete y punteros la función debe
//   crear un arreglo multidimensional de M x N si el parametro booleano es verdadero. Si el parametro
//   es falso entonces la función debe crear una matriz triangular de M x N. Los elementos de la matriz
//   o del arreglo multidimensionalse deben rellenar con los numeros a partir del cero y en orden ascendente
//   hasta el último elemento de la matriz o del arreglo.
//nota personal: profe en caso de querer la otra matriz en la linea 56 el false lo cambia por 1 y el programa entrega la otra matriz.

#include <iostream>

using namespace std;

int** crearmatriz(unsigned M, unsigned N, bool flag)
    {
      int** array2D = 0;
      array2D = new int*[M];
      int cont = 0;


      for (int h = 0; h < M; h++)
      {
            array2D[h] = new int[N];

            for (int w = 0; w < N; w++)
            {

                if(flag == true){

                    array2D[h][w] = cont;
                    cont++;

}
                else{

                    if(M-w > h){
                        array2D[h][w] = cont + 1;
                        cont++;
                    }
                    else{
                        array2D[h][w] = 0;
                    }
                }

            }
      }
      return array2D;
}

int main()
{
    printf("Crear arreglo bidimensional\n");
         printf("\n");

         int M = 10;
         int N = 10;
         bool tri = false;


         //en caso de querer la otra matriz pone en false 1 y muestra la otra matriz
         int** my2DArray = crearmatriz(M, N, tri);


         // print contents of the array2D
         printf("Contenido del arreglo\n");

         for (int h = 0; h < M; h++)
         {
               for (int w = 0; w < N; w++)
               {
                     printf("%i,", my2DArray[h][w]);
               }
               printf("\n");
         }



             printf("\n");
             printf("Limpiar memoria\n");
             for ( int h = 0; h < M; h++)
             {
               delete [] my2DArray[h];
             }
             delete [] my2DArray;
             my2DArray = 0;
             printf("Listo.\n");

         return 0;
}
