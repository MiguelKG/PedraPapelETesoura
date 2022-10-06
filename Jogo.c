#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int act = 0, playerAct = 0, enemyAct = 0, ctn = 1, p[3][2] = {{3, 2}, {1, 3}, {2, 1}};
    srand(time(NULL));

    while (ctn == 1) {
        printf("\nBem-vindo ao Pedra, Papel e Tesoura!\n"
        "Escolha sua jogada:\n1 - Pedra\n2 - Papel\n3 - Tesoura\n");
        scanf("%d", &playerAct);
        while (playerAct < 1 || playerAct > 3) {
            printf("Valor inválido, por favor, informe novamente sua jogada\n");
            scanf("%d", &playerAct);
        }
        printf("\n");
        enemyAct = ((rand() % 3) + 1);

        for(int i = 0; i < 2; i++) {
            if (i == 0) {
                act = playerAct;
                printf("Jogador jogou ");
            } else {
                act = enemyAct;
                printf("Computador jogou ");
            }

            switch (act) {
                case 1:
                    printf("pedra!\n");
                    break;
                case 2:
                    printf("papel!\n");
                    break;
                case 3:
                    printf("tesoura!\n");
                    break;
            }
        }

        if (playerAct == enemyAct) {
            printf("Empate\n");
        } else {
            if (p[playerAct - 1][0] == enemyAct) {
                printf("Você venceu\n");
            } else {
                printf("Você perdeu\n");
            }
        }

        printf("\nDeseja jogar novamente?\n1 - Sim\n2 - Não\n");
        scanf("%d", &ctn);
        while (ctn < 1 || ctn > 2) {
            printf("Valor inválido, por favor, digite um valor válido\n");
            scanf("%d", &ctn);
        }
    }
}