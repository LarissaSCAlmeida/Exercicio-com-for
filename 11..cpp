/*Solicitar ao usu�rio dez n�meros e contar quantos deles � par*/
#include<stdio.h>
int main ()
{
	int n,cont,par;
	for(cont=1;cont<=10;cont++)
	{
		printf("Digite o %.d numero: ", cont);
		scanf("%d", &n);
		
		if(n%2==0) /*% so funcionar em numeros inteiros*/
		{
			par++;
		}
	}
	printf("Numeros pares = %.2d",  par);
}
