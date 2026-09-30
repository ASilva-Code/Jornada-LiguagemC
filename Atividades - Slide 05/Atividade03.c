#include <stdio.h>
 
int main() {

    float nota;
    float soma = 0;
    float media;

    printf("Sistema de Analise de Notas\n\n");

    for (int i = 0; i < 10; i++) {

        do {
            printf("Digite a nota do cliente %d: ", i + 1);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {
                printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
            }

        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / 10;

    printf("\nMedia geral: %.2f\n", media);

    if (media < 7) {
        printf("Alerta! Média de avaliações abaixo do mínimo tolerado!\n");
    } else {
        printf("Continue com o bom trabalho!\n");
    }
    return 0;
}
