#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main(){
	printf("EJERCICIO 1.\n");
	
	//Creamos la matriz
	int matriz[5][3];
	int i,j;
	
	//aleatorio
	int aleatorio;
	
	srand(time(NULL));
	
	aleatorio = rand() % 10;
	printf("%d", aleatorio);
	printf("\n");
	
	//Rellenamos la matriz
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			matriz[i][j] = rand() % 10;
		}
	}
	
	//Mostramos la matriz
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	
	
	//Sumamos las filas de la matriz
	for(i=0;i<5;i++){
		int s=0;
		for(j=0;j<3;j++){
			printf("%d ", matriz[i][j]);
			s += matriz[i][j];
			//s = s + matriz[i][j];	
		}
		printf("= %d\n", s);
	}
	
	printf("\n");
	
	//Sumamos las columnas de la matriz
	for(i=0;i<3;i++){
		int s=0;
		for(j=0;j<5;j++){
			printf("%d ", matriz[j][i]);
			s += matriz[j][i];
			//s = s + matriz[i][j];	
		}
		printf("= %d\n", s);
	}
	
}
