/*Solicitar ao usuário dois números e 
exibir na tela os números do intervalo, excluindo os números digitados.*/
#include<stdio.h>
int main ()
{
	int cont=1, n1, n2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	if(n1<n2)
	{
		for(cont+=n1;cont<n2;cont++)
		{
			printf("%d\n", cont);
		}
	}
	if(n1>n2)
	{
		for(cont+=n2;cont<n1;cont++)
		{
			printf("%d\n", cont);
		}
	}
	if(n1==n2)
	{
		printf("Numeros iguais!!");
	}
	
}
