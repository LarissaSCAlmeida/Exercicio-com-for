/*Solicitar ao usuário a quantidade de vezes que será 
exibida na tela a palavra “teste”.*/
#include<stdio.h>
int main()
{
	int cont,vezes;
	printf("Digite quantas as vezes a palavra teste ira a parece: ");
	scanf("%d", &vezes);
	for(cont=1;cont<=vezes;cont++)
	{
		printf("Teste!\n");
	}
}
