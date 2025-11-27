#include <stdio.h>

int main() {
    // limpa a tela do terminal e da um enterço no cursor
    printf("\e[1;1H\e[2J\n");
    // impprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numeroSecreto = 42;

    printf("O número secreto é %d. Não conta pra ninguém!\n", numeroSecreto);
}