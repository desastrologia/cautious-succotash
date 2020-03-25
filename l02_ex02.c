#include <stdio.h>
#include <stdlib.h>

/* L02_002.alg � Elaborar um algoritmo que receba o Nome e ano nascimento de uma pessoa.
 Fazer as verifica��es em cada entrada e ser n�o atender a condi��o, dar uma
mensagem e finalizar o algoritmo, caso contr�rio, processar e mostrar o nome e sua
idade.
Obs.: Considerar que a pessoa j� fez anivers�rio este ano.

Data: 10/03/2020
Tha�s Bonfim

*/

int main()
{
   //INSERIR VARS

   char nm[50];
   int ano, id;

   //ZERAR VARS

   ano = id = 0;
   strcpy (nm, "");



   //RECEBER DADOS

   printf ("\n\n Digite nome.....:");
   fflush (stdin);
   gets(nm);

   //VERIFICAR SE HOUVE DIGITA��O DE NOME
   if (strcmp (nm,"") == 0)
   {
       printf ("\n\n Nome invalido... N�o foi inserido...");

   }
   else
   {
     printf ("\n\n Insira o ano de nascimento...:");
     fflush (stdin);
     scanf ("%d", &ano);

     //VERIFICAR  SE ANO � MAIOR QUE 1900
     if (ano < 1900 || ano > 2020)
     {
         printf ("\n\n Ano invalido");
     }
     else
     {
         //CALCULAR IDADE
         id = 2020 - ano;

         printf ("\n\n %s voce tem %d anos de vida...", nm, id);
     }
   }






    return 0;
}
