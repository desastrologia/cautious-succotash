Algoritmo "ex_01"
// Disciplina   : [Algoritimo]
// Professor   : Ernani Borges
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Tha�s Resende
// Data atual  : 27/02/2020


   //Elaborar um algoritmo que receba quatro notas de um aluno, processar e mostrar o valor da
   //m�dia aritm�tica das quatro notas.


Var
   // Se��o de Declara��es das vari�veis
   n1, n2, n3, n4, n5 : real
   


Inicio
   // Zerar
   n1 <- 0
   n2 <- 0
   n3 <- 0
   n4 <- 0
   n5 <- 0
   
   
   //Receber informa��es
   
   Escreval ("Inserir primeira nota...:")
   Leia (n1)
   
   Escreval ("Inserir segunda nota...:")
   Leia (n2)
   
   Escreval ("Inserir terceira nota...:")
   Leia (n3)
   
   Escreval ("Inserir quarta nota...:")
   Leia (n4)
   
   //Calcular
   
   n5 <- n1 + n2 + n3 + n4 / 4
   
   // Mostrar resultados
   
   Escreval ("M�dia do aluno...:", n5)


Fimalgoritmo