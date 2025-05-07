#include <stdio.h>
 
    void moverTorre(int casas){
        if(casas > 0){
            printf("diereita\n");
            moverTorre(casas - 1);
        }
    
    }

    void moverBispo(int casas){
         if(casas > 0){
            printf("diagonal direita para cima\n");
            moverBispo(casas - 1);
          }  
    }    

    void moverRainha(int casas){
            if(casas > 0){
                printf("esquerda\n");
                moverRainha(casas - 1);
            }
    }
    
int main(){
    
    int i = 0, j = 0, k = 0,movimentocompleto = 1, l = 0;
    printf("Jogo de Xadrez\n");
    printf("Tabuleiro 8x8\n");
    printf("Colunas: a b c d e f g h\n");
    printf("Linhas: 1 2 3 4 5 6 7 8\n");

    printf("Movimento da Torre:\n");

        moverTorre(5);

        
    printf("movimento do bispo:\n");
        moverBispo(5);
        
    
    
   
    printf("Movimento da Rainha\n");
        moverRainha(8);          

        
       printf("Movimento do Cavalo\n");
    while(movimentocompleto--)
    {
            
        for(l = 0; l < 2; l++)
        {
            printf("cima\n");
        }
            printf("direita\n");
    }
        
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
 
    