/* Eleição: 
Em uma cidade haverá uma eleição. Existem 3 candidatos: 
1 – Huguinho 
2 – Zezinho 
3 – Luizinho 
Diversos  eleitores  votarão;  por  não  sabermos  a  quantidade  a 
eleição  será  encerrada  com  a  digitação  de 0(zero) no voto. Considere as seguintes
 rotinas neste Algoritmo: 
a)   Ler os votos e acumular os votos de cada candidato. 
b)   Caso seja digitado um voto inválido (diferente de 0, 1, 2 e 3) acumular o voto 
como nulo. 
c)   Sabendo-se o total de votos, calcular a porcentagem atingida por cada candidator. 
d)   Ao finalizar o algoritmo, exibir os candidatos – e as informações respectivas da 
apuração 
*/
#include<stdio.h>
int main()
{
	int ht=0,zt=0,lt=0,nt=0,votos,cont;
	float hp,zp,lp,vt,np;
	for(cont=1;;cont++)
	{
		printf("Digite seu voto ");
		scanf("%d", &votos);
		if(votos==0)
		{
			break;
		}
		if(votos==1)
		{
			ht++;
		}
		if(votos==2)
		{
			zt++;
		}
		if(votos==3)
		{
			lt++;
		}
		if(votos!=3 && votos!=2 && votos!=1 && votos!=0 )
		{
			nt++;
		}


		}
		vt=nt+ht+zt+lt;
		hp=((float)ht/vt)*100;
		zp=((float)zt/vt)*100;
		lp=((float)lt/vt)*100;
		np=((float)nt/vt)*100;
		
		printf("Total de votos Huguinho e de %.d e sua porcentagem e de %.2f\n", ht,hp);
		printf("Total de votos Zezinho e de %.d e sua porcentagem e de %.2f\n", zt,zp);
		printf("Total de votos Luizinho e de %.d e sua porcentagem e de %.2f\n", lt,lp);
		printf("Total de votos nulos e de %.d e sua porcentagem e de %.2f\n", nt,np);
}
