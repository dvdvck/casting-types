#include <stdio.h>
#include <stdlib.h>


int main (int argv, char *argv[]){

	unsigned short *input;
	unsigned char *output;
	int numelem;

	numelem = strtol(argv[1], NULL, 0);

	if(numelem == 0){
		numelem = 6;
	}
	

	//Llenado manual... no se de donde vayan a salir estos datos
	arrint[0]=4;
	arrint[1]=8;
	arrint[2]=15;
	arrint[3]=16;
	arrint[4]=23;
	arrint[5]=42;
	
	printf("State of art:\n");
	printf("int: %d, short: %d, char: %d\n", sizeof(int), sizeof(short), sizeof(char));

	for(i=0;i<numelem;i++){
		printf("\narrint[%d] = %d",i,arrint[i]);
		sprintf(arrcha[i],"%d",arrint[i]);
		printf("\narrcha[%d] = %s \n",i,arrcha[i]);
	}
	
	return 0;	
}