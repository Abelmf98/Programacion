#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numCasos, i;
char nombre[50];

main(){
	
	scanf("%d", &numCasos);
	
	for(i=0; i<numCasos; i++){	
	
		scanf("%s\n", nombre);
		
		printf("Hola %s", nombre, ".");
	}
	return 0;
}
