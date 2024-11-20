/* Solicitar dez números ao usuário, verificar e exibir o de maior valor. */
#include<stdio.h>
int main ()
{
	float n,maior;
	int cont;
	for(cont=1;cont<=10;cont++)
	{
		printf("Digite o %.d numero: ", cont);
		scanf("%f", &n);
		if(n>maior)
		{
			maior=n;
		}
	}
	printf("o Maior numero e o %.2f!", maior);
}
