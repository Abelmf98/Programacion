#include <stdio.h>

	//Prototipo de funciones
void introducir(char cadena[50]);
void visualizar(char cadena[50]);
void quitar_blancos(char cadena[50]);

main(){
	char cadena[50];
	
	introducir(cadena);
	visualizar(cadena);
	quitar_blancos(cadena);
	visualizar(cadena);
	
}

void introducir(char cadena[50])
{
	printf("frase: ");
	scanf("%[^\n]",cadena);
}
void visualizar(char cadena[50])
{
	printf("frase: %s", cadena);
}
void quitar_blancos(char cadena[50])
{
	int i=0;
	while (cadena[i]!='\0')
		i++;
	i--;
	while (cadena[i]==' ')
		i--;
	cadena[++i]='\0';
}
