#include <stdio.h>
#include <stdlib.h>

    //L01_007.alg - Elabore um algoritmo que receba o nome de duas pessoas e mostre no vídeo a união
    // (concatenação) destes dois nomes.
    //Ex.: nome1  MARIA
    // nome2  JOÃO
    // resultado (mostrar) : MARIA e JOÃO

int main()
{
   //CRIAR VARS

   char nome1[50], nome2[50], nome3[100];


   //INICIALIZAR VARS

   strcpy (nome1, "");
   strcpy (nome2, "");
   strcpy (nome3, "");

   //RECEBER NOMES
   printf ("\n insira primeiro nome....: ");
   fflush (stdin);
   gets (nome1);

   printf ("\n insira segundo nome.......:");
   fflush (stdin);
   gets (nome2);


   //CONCATENAR PARA DENTRO DO NOME3

   strcat (nome3, nome1); //COLOCST NOME1 NO NOME3
   strcat (nome3, " e "); //ADICIONAR "e"AO NONME
   strcat (nome3, nome2); //somar nomes

   //RESULTADOS

   printf ("\n\n\n nome3 = %s", nome3);



}
