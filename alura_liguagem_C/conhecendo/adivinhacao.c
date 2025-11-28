#include <stdio.h>

int main() {
    // limpa a tela do terminal e da um enterço no cursor
    printf("\e[1;1H\e[2J\n");
    // impprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numeroSecreto = 42;

    int chute;
    
    for(int i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3\n", i);

        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numeroSecreto);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
        } else {

            int maior = (chute > numeroSecreto);

            if(maior) {
                printf("Seu chute foi maior que o número secreto!\n");
            } else {
                printf("Seu chute foi menor que o número secreto!\n");
            }
        }
    }
    printf("Fim de jogo!\n");
}