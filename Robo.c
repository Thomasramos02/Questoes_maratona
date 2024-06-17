#include <stdio.h>

int ehValido(int x, int y, int L, int C, int mapa[L][C]) {
    return x >= 0 && x < L && y >= 0 && y < C && mapa[x][y] == 1;
}

void encontrarPosicaoFinal(int L, int C, int startX, int startY, int mapa[L][C], int *finalX, int *finalY) {
    int x = startX - 1; 
    int y = startY - 1; 
    
    while (1) {
        if (ehValido(x - 1, y, L, C, mapa)) {
            mapa[x][y] = 0; 
            x--;
        } else if (ehValido(x + 1, y, L, C, mapa)) {
            mapa[x][y] = 0;
            x++;
        } else if (ehValido(x, y - 1, L, C, mapa)) {
            mapa[x][y] = 0;
            y--;
        } else if (ehValido(x, y + 1, L, C, mapa)) {
            mapa[x][y] = 0;
            y++;
        } else {
            break;
        }
    }
    
    *finalX = x + 1; 
    *finalY = y + 1;
}

int main() {
    int L, C;
    scanf("%d %d", &L, &C);
    
    int A, B;
    scanf("%d %d", &A, &B);
    
    int mapa[L][C];
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
    
    int finalX, finalY;
    encontrarPosicaoFinal(L, C, A, B, mapa, &finalX, &finalY);
    
    printf("%d %d\n", finalX, finalY);
    
    return 0;
}
