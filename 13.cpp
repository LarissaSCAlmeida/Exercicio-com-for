/*Solicitar n�meros ao usu�rio, somar os que estiverem entre 35 e 55. 
Digitar zero para finalizar a 
edi��o dos n�meros e exibir o resultado. */
#include<stdio.h>
int main ()
{
	float n=0,cont,soma;
	for(cont=1;;cont++) /* quando n�o tem uma parada definidar usar o break e no for 
	e necessario ter a parada definida tipo 10 numeros caso n�o tenha colocar o 
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
