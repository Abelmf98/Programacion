#include <stdio.h>

int numCasos, numCables, cableM, cableH, num;
char caracter;

main(){
	scanf("%d", &numCasos);
	while(numCasos--){
		cableM = 0;
		cableH = 0;
		num = 0;
		scanf("%d", &numCables);
		while(num/2 <numCables){
			scanf("%c", &caracter);
			if(caracter == 'M'){
				cableM++;
				num++;
			}else if(caracter == 'H'){
				cableH++;
				num++;
			}
		}
		if(cableM == cableH){
			printf("POSIBLE\n");
		}else{
			printf("IMPOSIBLE");
		}
	}
}
