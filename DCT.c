#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, i, j, x, y;
    double a, b, G, pi = 3.141592, somatorio = 0;
    scanf("%d", &N);
    double matriz[N][N], matriz_transformada[N][N];

    for(x = 0; x < N; x++) {
        for(y = 0; y < N; y++) {
            scanf("%lf", &matriz[x][y]);
        }
    }

    // for(x = 0; x < N; x++) {
    //     for(y = 0; y < N; y++) {
    //         printf("%9.3lf ", matriz[x][y]);

    //         if (y == N-1) {
    //             printf("\n");
    //         }
    //     }
    // }  
    
    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            if((i == 0)) {
                a = (1.0 / sqrt(N));
            } else {
                a = sqrt(2.0 / N);
            }
            if((j == 0)) {
                b = (1.0 / sqrt(N));
            } else {
                b = sqrt(2.0 / N);
            }
            for(x = 0; x < N; x++) {
                for(y = 0; y < N; y++) {

                    printf("[DEBUG][ANTES] Valor somatório antes de operacao: %lf\n", somatorio);
                    printf("[DEBUG][ANTES] Posição na matriz: Linha: %d   Coluna: %d \n", x, y);
                    printf("[DEBUG][ANTES] Valor de a: %lf\n", a);
                    printf("[DEBUG][ANTES] Valor de b: %lf\n", b);
                    
                    if (x != 0 || y != 0) {
                        printf("[DEBUG][ANTES] Valor de g: %lf\n", G);
                    }
                    
                    printf("\n\n");
                    printf("---------------------------------------------------------\n");
                    printf("\n\n");

                    somatorio = somatorio + matriz[x][y] * cos(((2 * y + 1) * j * pi) / 2 * N) * cos(((2 * x + 1) * i * pi) / 2 * N);
                    G = a * b * somatorio;

                    printf("[DEBUG][DEPOIS] Valor somatório antes de operacao: %lf\n", somatorio);
                    printf("[DEBUG][DEPOIS] Posição na matriz: Linha: %d   Coluna: %d \n", x, y);
                    printf("[DEBUG][DEPOIS] Valor de a: %lf\n", a);
                    printf("[DEBUG][DEPOIS] Valor de b: %lf\n", b);
                    printf("[DEBUG][DEPOIS] Valor de g: %lf\n", G);
                }
            }  

            matriz_transformada[i][j] = G;
            printf("%9.3lf ", matriz_transformada[i][j]);
            if(j == N - 1) {
                printf("\n");
            }
        }
    }
}