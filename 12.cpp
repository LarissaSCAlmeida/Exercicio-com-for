/*Solicitar ao usu�rio dez n�meros e somar os n�meros positivos. */
#include<stdio.h>
int main ()
{
	float n,soma,cont;
	
	for(cont=1;cont<=10;cont++)
	{
		printf("Digite o %.f numero: ", cont);
		scanf("%f", &n);
		if(n>0)
		{
			soma+=n;
		}
	}
	printf("Total = %.2f", soma);
}
