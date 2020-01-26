#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE *fp = fopen("elephant_seal_data.txt", "r");
	
	//check if file was succesfully opened for reading
	if(fp == NULL){

		printf("Failed to open FIle...\n");
		exit(1);
	}
	//Perform operation on file
	fseek(fp, 0, SEEK_END); //seek to end of file
	int SIZE = ftell(fp); //get size of file
	printf("file size: %d", SIZE);
	int data_array[SIZE]; //set size of file to size of array
	fseek(fp, 0, SEEK_SET ); // Seek back to begining of file
	SIZE = ftell(fp);
	printf("file size: %d", SIZE);
	printf("Perform operations with file.\n");
	int i = 0;
	int counter = 0; //counts number of values in file to allocate size of array to contain!
	while(i < SIZE){
		counter++;
		fscanf(fp, "%d", &data_array[i]);
		i++;
	}

	printf("number of elephant_seal_data: %d\n", counter);
	for(i = 0; i < SIZE; i++){
		printf("%d\n", data_array[i] );
	}

	fclose(fp);

	return 0;
}