#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Digite um n�mero:\n");
	scanf("%d", &n);
	printf(n % 2 ? "N�mero �mpar!" : "N�mero par!");
	return 0;
}
