#include <stdio.h>

int numCasos, insectos, aracnidos, crustaceos, escolpendra, aescolopendra, resultado;
		
main(){
	
		scanf("%d", &numCasos);
	
	while(numCasos>0) {
		
		scanf("%d", &insectos);
		scanf("%d", &aracnidos);
		scanf("%d", &crustaceos);
		scanf("%d", &escolpendra);
		scanf("%d", &aescolopendra);
		
		numCasos--;
		
		resultado = (insectos*6)+(aracnidos*8)+(crustaceos*10)+(escolpendra*aescolopendra*2);
		
		printf("%d\n", resultado);		
	}
}
