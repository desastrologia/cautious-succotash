#include <stdio.h>
#include <stdlib.h>


/* L01_009.alg - Elabore um algoritmo que receba um valor real, processe e mostre:
a) O valor inicial;
b) o valor do juros referente a 12% ao mês (considerar mês de 30 dias);
c) o valor total reajustado em 12%.

*/

int main()
{

    //CRIAR VARS
    float vl_inicial, vl_juros, vl_total;

    // INICIALIZAR VARS

    vl_inicial = vl_juros = vl_total = 0;

    //RECEBER VALOR INICIAL

    printf ("\n\n Digite valor inicial....: ");
    fflush (stdin);

    scanf ("%f", &vl_inicial);

    //CALCULAR JUROS E TOTAL

    vl_juros = vl_inicial *12 / 100;
    vl_total = vl_inicial + vl_juros;

    //MOSTRAR RESULTADOS

    printf ("\n\n\n MOSTRAR RESULTADOS");

    printf ("\n valor inicial.... R$ %.2f", vl_inicial);
    printf ("\n valor do juros.... R$ %.2f", vl_juros);
    printf ("\n valor total.... R$ %.2f", vl_total);




    return 0;
}
