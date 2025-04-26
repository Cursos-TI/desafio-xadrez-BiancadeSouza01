#include <stdio.h>


#include <stdio.h>

int main(){
    
    int t = 0, b = 0, r = 0;
    printf("Jogo de Xadrez\n");
    printf("Tabuleiro 8x8\n");
    printf("Colunas: a b c d e f g h\n");
    printf("Linhas: 1 2 3 4 5 6 7 8\n");
    printf("Movimento da Torre:\n");

    for (t = 0; t < 5;t++){
        printf("Direita\n");

    }
    
       printf("movimento do bispo:\n");
    while (b < 5){
        printf("Diagonal direita para cima\n");
      
        b++;
     }
   
        printf("Movimento da Rainha\n");
    
    do {
        printf("Direita\n");
        r++;

    } while (r < 8);
    

    printf(" Fim das jogadas\n");
    

        
     


    return 0;
}

    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
 
    