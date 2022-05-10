#include <stdio.h>

//Variables globales.
int numCasos, insectos, aracnidos, crustaceos, escolpendra, aescolopendra, resultado;
		
main(){
	
	do{
		printf("Introduce numero de casos: ");
		scanf("%d", &numCasos);
	}while(numCasos<=0 || numCasos>10);
	
	while(numCasos>0) {
		
		//Insectos.
		printf("\nIntroduce numero de insectos: ");
		scanf("%d", &insectos);
		//Aracnidos.
		printf("Introduce numero de aracnidos: ");
		scanf("%d", &aracnidos);
		//Crustaceos.
		printf("Introduce numero de crustaceos: ");
		scanf("%d", &crustaceos);
		//Escolopendras.
		printf("Introduce numero de escolopendras: ");
		scanf("%d", &escolpendra);
		//Anillos de escolopendras.
		printf("Introduce numero de anillos de escolopendras: ");
		scanf("%d", &aescolopendra);
		
		//numCasos--;
		
		resultado = (insectos*6)+(aracnidos*8)+(crustaceos*10)+(escolpendra*aescolopendra*2);
		
		printf("\nNumero de patas en total: %d", resultado);		
	}
		return 0;
}
