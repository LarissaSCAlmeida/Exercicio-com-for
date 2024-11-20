/*Solicitar ao usuário números, soma-los até que seja digitado um numero negativo.
 O numero negativo não fará parte da conta.
*/
 #include<stdio.h>
 int main ()
 
 {  
 
 	float n,soma=0;
 	 	printf(" ");
		for(scanf("%f", &n);n>=0;scanf("%f", &n))
 		{
 		  soma+=n;
 		  printf(" ");
 		}
		  printf("Total = %.2f", soma);
	
 }
