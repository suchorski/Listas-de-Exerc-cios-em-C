#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a, b, c, d;
	printf("Digite um n�mero\n");
	scanf("%f", &a);
	printf("Digite outro n�mero\n");
	scanf("%f", &b);
	printf("Digite outro n�mero\n");
	scanf("%f", &c);
	printf("Digite o �ltimo n�mero\n");
	scanf("%f", &d);
	printf("Calculando %.2f", pow(a, 3) + (b/c) * sqrt(d));
	return 0;
}
