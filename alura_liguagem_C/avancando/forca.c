#include <stdio.h>

int main() {
    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");
    printf("%s\n", palavrasecreta);

    int acertou = 0;
    int enforcou = 0;

    do {
        // Lógica do jogo aqui
    } while (!acertou && !enforcou);
}