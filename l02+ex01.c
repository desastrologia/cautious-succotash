#include <stdio.h>
#include <stdlib.h>


/*L02_001.alg – Elaborar um algoritmo que receba um número inteiro via teclado, Verificar se ele
é maior que zero e mostrar o cálculo e o resultado do cubo desse número, caso
contrário dê uma mensagem de número invalido.

Data: 10/03/2020
Autora: Thaís Borges

*/



int main()
{
    //CRIAR VARS

    int n, res;

    //INICIAR VARS
    n = res = 0;

    //RECEBER DADOS

    printf ("\n\n Informe um numero maior que zero...: ");
    fflush (stdin);
    scanf ("%d", &n);

    //VERFICAR SE É MAIOR QUE ZERO

    if (n <= 0)
    {
        printf ("\n\n numero negativo ou zero... invalido ... ");

    }
    else
    {

        //CALCULAR O CUBO
        res = n * n * n;
        printf ("\n\n O cubo de %d = %d",n, res);

    }







}
