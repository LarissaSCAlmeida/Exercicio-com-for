/*Solicitar ao usuário dois números (o da tabuada e do multiplicador) 
e exibir a tabuada no formato escolar.*/
#include<stdio.h>
int main()
{
	int n1,n2,cont,multi;
	printf("Digite o numero que voce quer a tabuada: ");
	scanf("%d", &n1);
	printf("Digite ate a onde vai a tabuada: ");
	scanf("%d", &n2);
	for(cont=0;cont<=n2;cont++)
	{
		multi=n1*cont;
		printf("%d X %d = %d\n", n1, cont,multi);
	}

}
