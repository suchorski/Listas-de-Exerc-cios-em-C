#include <stdio.h>

int main(int argc, char *argv[]) {
	char c = 'T';
	char *p = &c;
	printf("Valor de c: %c\n", c);
	printf("Valor da vari�vel apontado por p: %c\n", *p);
	printf("O endere�o de c: %p\n", &c);
	printf("O endere�o apontando por p: %p\n", p);
	printf("O endere�o de p: %p\n", &p);
	return 0;
}
