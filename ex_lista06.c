#include <stdio.h>
#include <stdlib.h>

/*  L01_006.alg - Elabore um algoritmo que leia (receba) um n�mero inteiro positivo
    (desprezar qualquer tipo de   verifica��o/valida��o).
    Calcule e mostre no v�deo a tabuada de multiplica��o de 1 a 10 deste n�mero com o respectivo resultado.

*/



int main()
{

  //criar vars

  int n, res;

  //inciiar vars
   n = res = 0;

   //receber dados

        printf ("\n\n\n digite numero para ser multiplicado...:");
        fflush (stdin);
        scanf ("%d", &n);

        //Calcular tabuada
        printf ("         TABUADA DP NUMERO %d", n);



        res = n * 1;
        printf ("\n %d * 1 = %d", n, res);


         res = n * 2;
        printf ("\n %d * 2 = %d", n, res);

         res = n * 3;
        printf ("\n %d * 3 = %d", n, res);

         res = n * 4;
        printf ("\n %d * 4 = %d", n, res);

          res = n * 5;
        printf ("\n %d * 5 = %d", n, res);

         res = n * 6;
        printf ("\n %d * 6 = %d", n, res);

         res = n * 7;
        printf ("\n %d * 7 = %d", n, res);

         res = n * 8;
        printf ("\n %d * 8 = %d", n, res);

         res = n * 9;
        printf ("\n %d * 9 = %d", n, res);

         res = n * 10;
        printf ("\n %d * 10 = %d", n, res);







    return 0;
}
