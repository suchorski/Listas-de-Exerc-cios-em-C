#include <stdio.h>

int main(int argc, char *argv[]) {
	int a, b;
	printf("Digite o primeiro n�mero:\n");
	scanf("%d", &a);
	printf("Digite o segundo n�mero:\n");
	scanf("%d", &b);
	printf("Soma: %d\n", a + b);
	printf("Subtra��o: %d\n", a - b);
	printf("Multiplica��o: %d\n", a * b);
	if (b != 0) {
		printf("Divis�o: %d\n", a / b);
		printf("Resto: %d\n", a % b);
	} else {
		printf("Divis�o imposs�vel!");
	}
	return 0;
}
