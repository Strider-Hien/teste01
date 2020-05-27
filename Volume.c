#include <stdio.h>


int volume(){

	int base, comprimento, altura;
	printf("Insira a base, o comprimento e a altura:\n");
	scanf("%d %d %d", &base, &comprimento, &altura);
	printf ("Volume: %d\n", base*comprimento*altura);

	return 0;
}