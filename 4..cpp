/*Solicitar ao usuário até qual numero será exibido na tela (iniciar a partir do 1).*/
#include<stdio.h>
int main()
{
	int cont,n;
	printf("Digite um numero final: ");
	scanf("%d", &n);
	for(cont=1;cont<=n;cont++)
	{
		printf("%d\n", cont);
	}
}
