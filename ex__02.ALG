Algoritmo "semnome"
// Disciplina   : [Algoritimo]
// Professor   : Ernani Borges
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Tha�s Resende
// Data atual  : 27/02/2020


   //) Elaborar um algoritmo que tr�s notas e seus
   // respectivos pesos, calcule e mostre o valor da m�dia
   //ponderada dessas notas. Obs.: sabe-se que a f�rmula
   // para c�lculo de m�dia ponderada �: o somat�rio da multiplica��o de
   //cada por seu peso, divido pela soma dos pesos.
   
   
Var
   // Se��o de Declara��es das vari�veis
   n1, p1, m1, n2, p2, m2, n3, p3, m3, sp, mf : real
   
   
   Inicio
    //zerar vari�veis
    
    n1 <- 0
    p1 <- 0
    n2 <- 0
    p2 <- 0
    n3 <- 0
    p3 <- 0
    m1 <- 0
    m2 <- 0
    m3 <- 0
    sp <- 0
    mf <- 0
    
    
    
    //Receber dados
    
    Escreval ("Inserir valor da primeira nota...:")
    Leia (n1)
    Escreval ("Inserir peso da primeira nota....:")
    Leia (p1)
    Escreval ("Inserir valor da segunda nota....:")
    Leia (n2)
    Escreval ("Inserir peso da segunda nota....:")
    Leia (p2)
    Escreval ("Inserir valor da terceira nota....:")
    Leia (n3)
    Escreval ("Inserir peso da terceira nota....:")
    Leia (p3)
    
    
    //Realizar calculos
    
//     sp <- p1 + p2 + p3
//     m1 <- n1 * p1
//     m2 <- n2 * p2
//     m3 <- n3 * p3
     
//     mf <-(m1 + m2 + m3) / sp
     
     mf <- ( (n1*p1)+(n2*p2)+(n3*p3) ) / (p1+p2+p3)
     
     // Mostrar resultados
     
     Escreval ("Resultado da m�dia..:", mf)


Fimalgoritmo