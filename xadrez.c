#include <stdio.h>

//Função recursiva da rainha
void movimento_rainha(int n){
    if (n > 0){
    printf("Esquerda\n");
    movimento_rainha(n-1);
    }
 }
 
 //Função recursiva da torre
void movimento_torre(int n){
    if (n > 0){
    printf("Direita\n");
    movimento_torre(n-1);
    }
 }

int main() {
 
    int casas_rainha = 8, casas_torre = 5;

    //Chama função recursiva da rainha
    printf("Jogada Rainha\n");   
    movimento_rainha(casas_rainha);
    printf("\n");

    //Chama função recursiva da torre
    printf("Jogada Torre\n");  
    movimento_torre(casas_torre);
    printf("\n");

    //Movimento Bispo aninhado
    printf("Jogada Bispo\n");
        for (int i = 0; i < 5; i++) {       
            for (int j = 0; j < 1; j++)
        {
            printf("Direita, ");
        }    
        printf("Cima\n");
         }

    printf("\n");
    
    //Movimento Cavalo com condição multipla + multiplas variáveis
    printf("Jogada Cavalo\n");
         for (int i = 0, j = 3; i <= 2 && j <= 3; i++, j--) {     
             if (i <= 1 )
        {
            printf("Cima\n");
        } else if (j == 1) {
            printf("Direita\n");
        }        
        }
        
   
    return 0;
}
