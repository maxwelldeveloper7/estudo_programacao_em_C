#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // limpa a tela do terminal e da um enterço no cursor
    printf("\e[1;1H\e[2J\n");
    // impprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();

    int numeroSecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Escolha o nível de dificuldade:\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    int numerotentativas;

    switch(nivel) {
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        default:
            numerotentativas = 6;
            break;
    }
    
    for(int i = 1; i <= numerotentativas; i++) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");            
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = (chute > numeroSecreto);

        if(acertou) {            
            break;
        } else if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        } else {            
            printf("Seu chute foi menor que o número secreto!\n");           
        }
        tentativas++;

        double pontosperdidos = abs(chute - numeroSecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    printf("Fim de jogo!\n");

    if(acertou) {
        printf("Você ganhou!\n");
        printf("Parabéns! Você acertou o número secreto %d\n", numeroSecreto);
        printf("Você tentou %d vezes\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Que pena! Você não acertou. O número secreto era %d\n", numeroSecreto);
    }
}
