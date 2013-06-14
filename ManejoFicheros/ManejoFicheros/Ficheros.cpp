#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *archivo;
	char cadena[10];
	archivo=fopen("hola.txt", "rb");

	if (archivo==NULL){
		printf("\n\r No se puede abrir el archivo !!!");
		
		exit(1);
	}
	fgets(cadena,sizeof(cadena)/sizeof(char),archivo);
	fclose(archivo);
	printf("\nCadena leida: %s\n",cadena);
	
	return 0;
}