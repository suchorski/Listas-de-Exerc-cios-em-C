#include <stdio.h>

int main(int argc, char *argv[]) {
	char letras[5] = { 'A', 'E', 'I', 'O', 'U'};
	int numeros[5] = { 1, 2, 3, 4, 5}, i;
	for (i = 0; i < 5; i++) {
		printf("%d: %p, %c\n", i, &letras[i], letras[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%d: %p, %d\n", i, &numeros[i], numeros[i]);
	}
	printf("\nO arranjo de caracteres aumentam na mem�ria de 1 em 1.\n");
	printf("O arranjo de inteiros aumentam na mem�ria de 4 em 4.\n");
	return 0;
}
