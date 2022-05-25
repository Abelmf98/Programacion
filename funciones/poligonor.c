#include <stdio.h>

float perimetro, apotema;
float area;

main(){
	printf("Introduce perimetro: ");
	scanf("%f", &perimetro);
	printf("\nIntroduce apotema: ");
	scanf("%f", &apotema);
	
	area=(perimetro*apotema)/2;
	
	printf("El area es %f", area);
	
}
