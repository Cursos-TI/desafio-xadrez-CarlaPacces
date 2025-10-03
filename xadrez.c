#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Implementação de Movimentação do Bispo
    printf("Movimento da Torre:\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");  


    // Implementação de Movimentação da Torre
     printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int contador = 0;  
    while (contador < casas_bispo) {
        printf("Cima, Direita\n");
        contador++;  
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
     printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do Cavalo:\n");
    int etapas_cavalo = 3;  
    for (int etapa = 0; etapa < etapas_cavalo; etapa++) {
        if (etapa < 2) {
            printf("Baixo\n");
        } else {
            int passos_esquerda = 0;
            int casas_esquerda = 1;
            while (passos_esquerda < casas_esquerda) {
                printf("Esquerda\n");
                passos_esquerda++;  
            }
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
