#include <stdio.h>

int main() {
    // Declaração de variáveis para controle dos movimentos
    int casas_torre = 5;      // Número de casas que a Torre irá mover
    int casas_bispo = 5;      // Número de casas que o Bispo irá mover
    int casas_rainha = 8;     // Número de casas que a Rainha irá mover
    int i;                    // Variável de controle para os loops
    
    // ========== MOVIMENTO DA TORRE ==========
    // A Torre move-se em linha reta (horizontal ou vertical, mas este caso, vamos mover 5 casas para a DIREITA
    // Utilizando estrutura de repetição FOR
    
    printf("---- Movimento da Torre ----\n");
    printf("Movendo 5 casas para a direita:\n");
    
    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separar os movimentos
    
    
    // ========== MOVIMENTO DO BISPO ==========
    // O Bispo move-se na diagonal, mas este caso, vamos mover 5 casas na diagonal para CIMA e DIREITA
    // Utilizando estrutura de repetição WHILE
    
    printf("---- Movimento do Bispo ----\n");
    printf("Movendo 5 casas na diagonal (cima e direita):\n");
    
    i = 0; // Reinicia o contador
    while (i < casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }
    
    printf("\n"); // Linha em branco para separar os movimentos
    
    
    // ========== MOVIMENTO DA RAINHA ==========
    // A Rainha move-se em todas as direções, mas neste caso, vamos mover 8 casas para a ESQUERDA
    // Utilizando estrutura de repetição DO-WHILE
    
    printf("---- Movimento da Rainha ----\n");
    printf("Movendo 8 casas para a esquerda:\n");
    
    i = 0; // Reinicia o contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas_rainha);
    
    printf("\n");
    printf("---- Simulacao concluida! ----\n");
    
    return 0;
}