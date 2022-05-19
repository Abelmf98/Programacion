#include <stdio.h>

//Variables
int t[3][3];
int sf[3];
int sc[3];
int i,j;

//Funciones
void introducir(void);
void sfilas(void);
void scolumnas(void);
void visualizar(void);

main(){
	introducir();
	sfilas();
	scolumnas();
	visualizar();
	return 0;
}

void introducir(void){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("t[%d][%d]: ", i,j);
			scanf("%d", &t[i][j]);
		}
	}
}

void sfilas(void){
	for(i=0;i<3;i++){
		sf[i]=0;
		for(j=0;j<3;j++){
			
		}
	}
}
