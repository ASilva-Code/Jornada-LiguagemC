#include <stdio.h>

int main() {
	
	int passos;
	int passos_t = 0;
	int horas = 0;
	
	printf("Bem-vindo ao UniFit!\n\n");
	
	do {
		horas++;
		printf("Tempo gasto: %d hora(s)\n", horas);
		printf("Digite a quantidade de passos percorridos: ");
		scanf("%d", &passos);
		
		 if (passos < 0) {
            printf("Quantidade de passos invalida!\n\n");
            horas--;
        } else {
            passos_t += passos;
        }
	}
	while (passos_t < 10000);
	
	printf("\nCorrida finalizada!\n");
	printf("Estatísticas abaixo:\n");
	printf("Passos percorridos: %d\n", passos_t);
	printf("Tempo necessário: %d hora(s)", horas);
	
	return 0;
}
