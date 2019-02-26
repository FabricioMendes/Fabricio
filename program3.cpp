#include<stdio.h>

// Programa 'Lê e imprime um valor'

int main()
{	
	int A=0;

	int B=0;
	
	printf("informe um valor A inteiro:");
	
	scanf("%i", &A);
	
	printf("O valor de A e:%i \n", A);
	
	printf("informe um valor B inteiro:");
	
	scanf("%i", &B);
	
	printf("O valor de B e:%i \n", B);
			
	if(A>B)
	{
		printf("A e maior que B!\n");
	}
	else
	{
		if (A<B)
		{
			printf("B e maior que A! \n");
		}
		else 
		{
			printf("A e igual a B!\n");
		}
	}
	return 1;
}

// criar um programa para comparar um valor com uma interface para o usuário;
