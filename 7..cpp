/*Solicitar ao usuário um número e exibir a tabuada no formato escolar.*/
#include<stdio.h>
int main()
{
	int n,cont,multi;
	printf("Digite o numero que voce quer a tabuada: ");
	scanf("%d", &n);
	
	for(cont=1;cont<=10;cont++)
	{
		multi=n*cont;
		printf("%d X %d = %d\n", n, cont,multi);
	}
}
