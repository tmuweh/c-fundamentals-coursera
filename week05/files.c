#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE *fp = fopen("elephant_seal_data.txt", "r");
	int data_array[50];
	
	//check if file was succesfully opened for reading
	if(fp == NULL)
		printf("Failed to open FIle...\n");

	//Perform operation on file
	else{
		printf("Perform operations with file.\n");
		int i = 0;
		int counter = 0; //counts number of values in file to allocate size of array to contain!
		while(!feof(fp)){
			counter++;
			fscanf(fp, "%d", &data_array[i]);
			i++;
		}

		printf("number of elephant_seal_data: %d\n", counter);
		for(i = 0; i < 50; i++){
			printf("%d\n", data_array[i] );
		}

	}

	fclose(fp);

	return 0;
}