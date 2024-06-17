#include <stdio.h>

int main() {
    char resultados[6];  
    int vitorias = 0;    

    printf("Digite os resultados dos jogos (V para vitória, P para perder):\n");
    for (int i = 0; i < 6; ++i) {
        scanf(" %c", &resultados[i]);
        if (resultados[i] == 'V') {
            vitorias++;
        }
    }

    int grupo = -1; 

    if (vitorias == 6) {
        grupo = 1;
    } else if (vitorias == 5) {
        grupo = 1;
    } else if (vitorias == 4) {
        grupo = 2;
    } else if (vitorias == 3) {
        grupo = 2;
    } else if (vitorias == 2) {
        grupo = 3;
    } else if (vitorias == 1) {
        grupo = 3;
    } else {
        grupo = -1;
        printf("Por favor retire se, voce nao foi convidado\n");
    }

    // Saída do grupo
    printf("Grupo: %d\n", grupo);

    return 0;
}
