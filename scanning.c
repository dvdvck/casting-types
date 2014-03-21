#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]){

	unsigned short *input;
	char **output;
	int numelem, i;
	
	if(argc < 2){
		numelem = 6;
	}else{
		numelem = strtol(argv[1], NULL, 0);
	}

	input = malloc(sizeof(short) * numelem);
	output = malloc(sizeof(char **) * numelem);

	for(i = 0; i < numelem; i++){
		*(output+i) = malloc(sizeof(char *) * 12);
	}

	//Llenado manual... no se de donde vayan a salir estos datos
	input[0]=4;
	input[1]=8;
	input[2]=15;
	input[3]=16;
	input[4]=23;
	input[5]=42;
	
	printf("State of art:\n");
	printf("int: %ld, short: %ld, char: %ld\n", sizeof(int), sizeof(short), sizeof(char));

	for(i=0;i<numelem;i++){
		printf("\ninput[%d] = %d",i,input[i]);
		sprintf(output[i],"%d",input[i]);
		printf("\noutput[%d] = %s \n",i,output[i]);
	}
	
	return 0;	
}