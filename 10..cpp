/*Solicitar ao usu�rio n�meros, soma-los at� que seja digitado um numero negativo.
 O numero negativo n�o far� parte da conta.
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
