#include <stdio.h>

int main() {
	
	int i = 0;
	float consumo;
	float consumo_t = 0;
	
	while (i < 5) {
		printf("Digite o consumo mensal do morador: ");
		scanf("%f", &consumo);
		
		if (consumo > 20) {
			printf("Morador consumiu acima da média! \n");
		}
		
		consumo_t = consumo + consumo_t;
		i++;
	}
	
	printf("Cosumo médio geral: %.2f m³", consumo_t/5);
	
	return 0;
}
