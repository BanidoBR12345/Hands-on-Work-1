#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])

{
	int opcao;
	int valor;
	
	printf("*CALCULADORA DE CONVERSAO DE BASES*\n");
	printf("1: Decimal para Hexadecimal\n");
	printf("2: Hexadecimal para decimal\n");
	printf("\nInforme a opcao: ");
	scanf("%d", &opcao);
	getchar();
	
	if (opcao ==1)
	{
		printf("\nInformar o valor em Decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d em Hexadecimal e: %x\n", valor, valor);
	}
	else if (opcao ==2)
	
	{
		printf("\nInformar o valor em Hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		printf("%x em Decimal e: %d\n", valor, valor);
	}
	
	
	
	
system("PAUSE");
return 0;
}
