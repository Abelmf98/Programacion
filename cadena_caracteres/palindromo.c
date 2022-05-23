#include<stdio.h>
#include<conio.h>
#include<string.h>

char cadena[50];
int longitud,final,i;

main()
{
	printf("PALABRAS PALINDROMAS\n");
	printf("\nEscribe una palabra palindroma: ");
	scanf(" %s",cadena);
	
	longitud=strlen(cadena);
	longitud=longitud-1;
	
	for(i=0,final=longitud;i<=longitud/2;i++,final--){
		if(cadena[i]==cadena[final]){ 
		     printf("Es palindromo");
		}else{
	             printf("No es palindromo");
	    }
	    break;
	}
	return 0;
}
