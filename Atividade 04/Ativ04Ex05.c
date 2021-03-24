/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Prot�tipos */
int consisteNumero(char*, int*);
void matematica(int*, int, int*, int*, int*, float*);

/* Fun��o principal */
int main(int argc, char *argv[]) {
	/* Vari�veis utilizadas */
	int *numeros = calloc(1, sizeof(int)), *numErr, tamanho = 1;
	char numero[16];
	int menor, maior, soma;
	float media;
	/* Consist�ncia e aloca��o din�mica s� para estudo */
	do {
		do {
			printf("Digite um n�mero (X para sair): ");
			gets(numero);
		} while (toupper(numero[0]) != 'X' && !consisteNumero(numero, &numeros[tamanho - 1]));
		if (toupper(numero[0]) != 'X') {
			tamanho++;
			numErr = (int*) realloc(numeros, tamanho * sizeof(int));
			if (numErr == NULL) {
				printf("Erro de aloca��o de mem�ria!");
				exit(1);
			} else {
				numeros = numErr;
			}
		} else {
			tamanho--;
		}
	} while (toupper(numero[0]) != 'X');
	/* C�digo pedido no exerc�cio */
	matematica(numeros, tamanho, &menor, &maior, &soma, &media);
	if (tamanho) {
		printf("\nMenor: %d\n", menor);
		printf("Maior: %d\n", maior);
		printf("Soma: %d\n", soma);
		printf("M�dia: %.2f\n", media);
	} else {
		printf("Nenhum n�mero cadastrado!");
	}
	return 0;
}

/*  Fun��o de consist�ncia */
int consisteNumero(char *temp, int *numero) {
	int i = (temp[0] == '-') ? 1 : 0;
	if (strlen(temp) == 0) {
		return 0;
	}
	for (i = 0; i < strlen(temp); i++) {
		if (!isdigit(temp[i])) {
			return 0;
		}
	}
	*numero = atoi(temp);
	return 1;
}

/* Fun��o pedida no exerc�cio */
void matematica(int *numeros, int tamanho, int *menor, int *maior, int *soma, float *media) {
	int i;
	*menor = *maior = *soma = numeros[0];
	for (i = 1; i < tamanho; i++) {
		if (numeros[i] < *menor) {
			*menor = numeros[i];
		}
		if (numeros[i] > *maior) {
			*maior = numeros[i];
		}
		*soma += numeros[i];
	}
	*media = (float) *soma / tamanho;
}
