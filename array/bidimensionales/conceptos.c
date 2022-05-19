#include <stdio.h>
#include <stdlib.h>

main(){
	printf("CONCEPTOS DE MATRICES \n\n");
	
	//Declaracion
	int matriz[3][2];
	int matriz2[2][3] = {1,2,3,4,5,6};
	
	//Asignacion
	matriz [1][2] = -3;
	
	//Recorrer la matriz
	int i,j;
	for(i=0; i<2; i++){
		for(j=0;j<3;j++){
			matriz2[i][j] = i+j;
		}
	}
	
	//Mostrar la matriz por pantalla
	for(i=0;i<3;i++){
		printf("%d ", matriz2[0][i]);	
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		printf("%d ", matriz2[1][i]);	
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ", matriz2[i][j]);	
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
