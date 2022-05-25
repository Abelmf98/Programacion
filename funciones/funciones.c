#include <stdio.h>

/*
	Objetivos:
	 - Declarar funciones
	 - Llamar funciones
	 - Programar funciones
*/

//Declaración de función
int funcion1(double param1, char param2){
	printf("Funcion 1\n");
	return 42;
}

void funcion2(){
	printf("Funcion 2\n");
}

float areaReg(float perimetro, float apotema){
	float area = (perimetro*apotema)/2;
	return area;
}

main(){
	//Llamada de funcion
	//funcion2();
	
	/*int respuesta = funcion1(3.0, 'z');
	printf("La funcion ha devuelto %d\n", funcion1(6.34, 'i'));*/
	
	float perimetro, apotema, area;
	
	int numCasos, i;
	
	scanf("%d", &numCasos);
	
	for(i=0;i<numCasos;i++){
		scanf("%f", &perimetro);
		scanf("%f", &apotema);
	
		area= areaReg(perimetro, apotema);
		printf("El resultado es : %.1f\n", area);
	}
		
	return 0;
}
