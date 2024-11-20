/*Solicitar números ao usuário, somar os que estiverem entre 35 e 55. 
Digitar zero para finalizar a 
edição dos números e exibir o resultado. */
#include<stdio.h>
int main ()
{
	float n=0,cont,soma;
	for(cont=1;;cont++) /* quando não tem uma parada definidar usar o break e no for 
	e necessario ter a parada definida tipo 10 numeros caso não tenha colocar o 
	break */
	{
		printf("");
		scanf("%f", &n);
		if (n==0)
		{
			break;
		}
		if(n>=35 && n<=55)
		{
			soma+=n;
		}
		
		
	}
	printf("total= %.2f", soma);
}
