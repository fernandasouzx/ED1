
#include <stdio.h>

int main() {
    int N;

    // Recebe o número de jogadores
    scanf("%d", &N);

    int S_total = 0, B_total = 0, A_total = 0;
    int PS_total = 0, PB_total = 0;

    // Loop para cada jogador
    for (int i = 0; i < N; i++) {
        char nome[50];
        int S, B, A, S_jogador, B_jogador, A_jogador;

        // Recebe o nome do jogador
        scanf("%s", nome);

        // Recebe as estatísticas do jogador
        scanf("%d %d %d", &S, &B, &A);
        scanf("%d %d %d", &S_jogador, &B_jogador, &A_jogador);

        // Atualiza as estatísticas totais
        S_total += S_jogador;
        B_total += B_jogador;
        A_total += A_jogador;

        // Calcula os pontos de saque e bloqueio do jogador
        int PS_jogador = S_jogador - A_jogador;
        int PB_jogador = B_jogador;

        // Atualiza os pontos totais de saque e bloqueio
        PS_total += PS_jogador;
        PB_total += PB_jogador;
    }

    // Calcula os percentuais em relação ao total de saques e bloqueios da equipe
    double percentual_S = (S_total > 0) ? ((double)PS_total / (double)S_total) * 100 : 0;
    double percentual_B = (B_total > 0) ? ((double)PB_total / (double)B_total) * 100 : 0;

    // Imprime os resultados
    printf("Saques: %.2lf%%\n", percentual_S);
    printf("Bloqueios: %.2lf%%\n", percentual_B);

    return 0;
}
