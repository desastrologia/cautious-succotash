#include <stdio.h>
#include <stdlib.h>
/*L02_003.alg � Elaborar um algoritmo que recebe tr�s notas de um aluno, Verificar uma de
cada vez e finalizar o processo caso sejam menor que zero ou maior que 10, caso
contr�rio, processar e mostrar o valor da m�dia aritm�tica.

Data: 10/03/2020
Tha�s Borges

*/

int main()
{
    //INSERIR VARS
    float n1, n2, n3, md;

    //ZERAR VARS
    n1 = n2 = n3 = md = 0;


    //RECEBER DADOS

    printf ("\n\n Insira valor da nota 1...: ");
    fflush (stdin);
    scanf ("%f", &n1);

    //VERIFICAR
    if (n1 < 0 || n1 > 10)
    {
        printf ("\n\n Nota 1 inv�lida");
    }
    else
    {
        printf ("\n\n Digite valor da nota 2...:");
        fflush (stdin);
        scanf ("%f", &n2);

        //VERFICAR NOTA 2
        if (n2 < 0  || n2 > 10)
        {
            printf ("\n\n Nota 2 inv�lida");
        }
        else
        {
            printf ("\n\n Digite valor da nota 3...:");
            fflush (stdin);
            scanf ("%f", &n3);

            //VERFIFICAR N3

            if(n3 < 0 || n3 > 10)
            {
                printf ("\n\n nota 3 invalida");
            }
            else
            {
                //CALCULAR M�DIA
                md =  (n1 + n2 + n3 ) / 3;
                printf ("\n\n Media = %.2f ", md);
            }
        }
    }
    return 0;
}
