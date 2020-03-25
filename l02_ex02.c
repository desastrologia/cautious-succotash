#include <stdio.h>
#include <stdlib.h>

/* L02_002.alg – Elaborar um algoritmo que receba o Nome e ano nascimento de uma pessoa.
 Fazer as verificações em cada entrada e ser não atender a condição, dar uma
mensagem e finalizar o algoritmo, caso contrário, processar e mostrar o nome e sua
idade.
Obs.: Considerar que a pessoa já fez aniversário este ano.

Data: 10/03/2020
Thaís Bonfim

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

   //VERIFICAR SE HOUVE DIGITAÇÃO DE NOME
   if (strcmp (nm,"") == 0)
   {
       printf ("\n\n Nome invalido... Não foi inserido...");

   }
   else
   {
     printf ("\n\n Insira o ano de nascimento...:");
     fflush (stdin);
     scanf ("%d", &ano);

     //VERIFICAR  SE ANO É MAIOR QUE 1900
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
