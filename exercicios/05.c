#include <stdio.h>

float media(float n1, float n2, float n3, int x, int y, int z){
    return ((n1 * x) + (n2 * y) + (n3 * z)) / (x + y + z);
}

int main() {
	float a,b,c;
	int p1,p2,p3;

	printf("Digite três notas: ");
	scanf("%f%f%f", &a, &b, &c);

	while(a < 0 || b < 0 || c < 0 || a > 10 || b > 10 || c > 10) {
		printf("Nota inválida! Digite três notas que não sejam negativas: ");
		scanf("%f%f%f", &a, &b, &c);
	}

	printf("Digite os pesos para cada nota (Nota 1, Nota 2, Nota 3): ");
	scanf("%d%d%d", &p1, &p2, &p3);

	while(p1 <= 0 || p2 <= 0 || p3 <= 0) {
	    printf("Peso inválido! O peso não pode ser menor ou igual a zero. Digite os pesos novamente: ");
        scanf("%d%d%d", &p1, &p2, &p3);
	}
	
	printf("Média ponderada das três notas: %.2f", media(a,b,c,p1,p2,p3));
	
	return 0;
}
