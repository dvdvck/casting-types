#include <stdio.h>

int main ( void ){

	int arrint[256];
	char arrcha[256][12];
	int i;
	int numelem=0;
	
	//Llenado manual... no se de donde vayan a salir estos datos
	arrint[0]=4;
	arrint[1]=8;
	arrint[2]=15;
	arrint[3]=16;
	arrint[4]=23;
	arrint[5]=42;
	
	//NUMERO DE ELEMENTOS CONOCIDO
	numelem=6; //Tampoco se de donde vas a sacar esto... haha
	
	printf("State of art:\n");
	printf("int: %d, short: %d, char: %d\n", sizeof(int), sizeof(short), sizeof(char));

	for(i=0;i<numelem;i++){
		printf("\narrint[%d] = %d",i,arrint[i]);
		sprintf(arrcha[i],"%d",arrint[i]);
		printf("\narrcha[%d] = %s \n",i,arrcha[i]);
	}
	
	return 0;	
}