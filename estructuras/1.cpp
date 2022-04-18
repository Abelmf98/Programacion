#include <stdio.h>

struct fecha{
	int dd;
	int mm;
	int aa;
};

struct nombre{
	int nexp;
	struct fecha fecha_nacimiento;
	int notas[3];
};

struct nombre alumnos[3];

struct nombre aux;

int i,j,sw;

main(){
	//Introducir datos
	for(i=0;i<=2;i++){
		printf("alumnos.nexp[%d]: ", i);
		scanf("%d", &alumnos[i].nexp);
		printf("dia[%d]: ", i);
		scanf("%d", &alumnos[i].fecha_nacimiento.dd);
		printf("mes[%d]: ", i);
		scanf("%d", &alumnos[i].fecha_nacimiento.mm);
		printf("anio[%d]: ", i);
		scanf("%d", &alumnos[i].fecha_nacimiento.aa);
		for(j=0;j<=2;j++){
			printf("notas[%d].notas[%d]: ", i, j);
			scanf("%d", &alumnos[i].notas[j]);
		}
	}
	
	//Visualizar datos
	for(i=0;i<=2;i++){
		printf("\nalumnos[%d].NEXP = %d", i, alumnos[i].nexp);
		printf("\nalumnos[%d].dia = %d", i, alumnos[i].fecha_nacimiento.dd);
		printf("\nalumnos[%d].mes = %d", i, alumnos[i].fecha_nacimiento.mm);
		printf("\nalumnos[%d].anio = %d", i, alumnos[i].fecha_nacimiento.aa);
		for(j=0;j<=2;j++){
			printf("\nalumnos[%d].notas[%d] = %d", i, j, alumnos[i].notas[j]);
		}
	}
	
	//ordenar con switch
	sw=0;
	while(sw==0){
		sw=1;
		for(i=0;i<=2;i++){
			if(alumnos[i].nexp < alumnos[i+1].nexp){
				aux=alumnos[i];
				alumnos[i]=alumnos[i+1];
				alumnos[i+1]= aux;
				sw=0;
			}
		}
	}
	printf("\n");
	printf("\nExp ordenado");
	//Visualizar datos ordenados de mayor a menor
	for(i=0;i<=2;i++){
		printf("\nalumnos[%d].NEXP = %d", i, alumnos[i].nexp);
		printf("\nalumnos[%d].dia = %d", i, alumnos[i].fecha_nacimiento.dd);
		printf("\nalumnos[%d].mes = %d", i, alumnos[i].fecha_nacimiento.mm);
		printf("\nalumnos[%d].anio = %d", i, alumnos[i].fecha_nacimiento.aa);
		for(j=0;j<=2;j++){
			printf("\nalumnos[%d].notas[%d] = %d", i, j, alumnos[i].notas[j]);
		}
	}
}
