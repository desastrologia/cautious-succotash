Algoritmo "ex_01"
// Disciplina   : [Algoritimo]
// Professor   : Ernani Borges
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Thaís Resende
// Data atual  : 27/02/2020


   //Elaborar um algoritmo que receba quatro notas de um aluno, processar e mostrar o valor da
   //média aritmética das quatro notas.


Var
   // Seção de Declarações das variáveis
   n1, n2, n3, n4, n5 : real
   


Inicio
   // Zerar
   n1 <- 0
   n2 <- 0
   n3 <- 0
   n4 <- 0
   n5 <- 0
   
   
   //Receber informações
   
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
   
   Escreval ("Média do aluno...:", n5)


Fimalgoritmo