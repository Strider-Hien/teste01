#include <stdio.h>


int area(){

	int base, altura;
	printf("Insira a base e a altura:\n");
	scanf("%d %d", &base, &altura);
	printf ("Area: %d\n", base*altura);

	return 0;
}