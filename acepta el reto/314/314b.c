#include <stdio.h>

int nCasos, nTemperaturas;
int picos, valles, i,j;

main(){
	//Introducimos el numero de casos
	scanf("%d", &nCasos);
	//printf("El numero de casos es: %d\n", nCasos);
	
	//Introducimos el numero de temperaturas mientras haya casos posibles
	for(i=0;i<nCasos; i++){
		scanf("%d", &nTemperaturas);
		//printf("El numero de temperaturas es %d\n", nTemperaturas);
		int temperaturas[nTemperaturas];
		for(j=0;j<nTemperaturas;j++){
			scanf("%d", &temperaturas[j]);
			//printf("Las temperaturas son %d\n", temperaturas[j]);
		}
		int estaSubiendo=0;
		picos=0;
		valles = 0;
		for(j=1;j<nTemperaturas-1;j++){
			if(temperaturas[j-1] < temperaturas[j] && temperaturas[j+1] < temperaturas[j]){
				estaSubiendo=1;
				picos++;
			}
			if(temperaturas[j-1] > temperaturas[j] && temperaturas[j+1] > temperaturas[j]){
				estaSubiendo = 0;
				valles++;
			}	
		} 
		printf("%d %d\n", picos, valles);
		//printf("\n");
	}
	return 0;
}
