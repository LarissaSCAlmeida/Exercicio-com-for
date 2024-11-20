/*  Solicitar ao usuário dois números, correspondentes as extremidades de um intervalo,
 e exibir na ordem (crescente ou decrescente) em que ele digitou.*/
 #include<stdio.h>
 int main()
 {
 	float n1,n2,cont;
 	printf("Digite o primeiro numero: ");
 	scanf("%f", &n1);
 	printf("Digite o primeiro numero: ");
 	scanf("%f", &n2);
 	if(n1<n2)
 	{
 		for(cont=n1;cont<=n2;cont++)
		 {
		 	printf("%.f ", cont);
		 }	
	} 
	if(n2<n1)
	 	for(cont=n2;cont<=n1;n1--)
		 {
		 	printf("%.f ", n1);
		 }	
 }
