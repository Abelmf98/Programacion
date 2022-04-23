#include <stdio.h>

//variables
int t[10];

int i,j,aux,sw;

main(){
	
	//introducir array
	for(i=0;i<=9;i++){
		do{
			printf("t[%d]: ", i);
			scanf("%d", &t[i]);
		}while(t[i]<1 || t[i]>99);
	}
	
	aux=0;	
	//ordenador de mayor a menor con burbuja de mayor a menor
	for(i=0;i<=8;i++){
		for(j=0;j<=8-i;j++){
			if(t[j]<t[j+1]){
				aux=t[j];
				t[j]=t[j+1];
				t[j+1]=aux;
			}
		}
	}
	
	//visualizar ordenado
	for(i=0;i<=9;i++){
		printf("\t%d", t[i]);
	}
	
	printf("\n");
	//ordenar con switch de menor a mayor
	sw=0;
	while(sw==0){
		sw=1;
		for(j=0;j<=8;j++){
			if(t[j]>t[j+1]){
				aux=t[j];
				t[j]=t[j+1];
				t[j+1]=aux;
				sw=0;
			}
		}
	}
	
	//visualizar ordenador con switch
	for(i=0;i<=9;i++){
		printf("\t%d", t[i]);
	}
}
