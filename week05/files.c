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

	}

	fclose(fp);

	return 0;
}