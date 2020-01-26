/*
	Tangue Muweh
	Calculate Average weight of Elephant seal
	V1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE *fp = fopen("elephant_seal_data.txt", "r");
	int elephant_raw_data[10000]={0}; //initialize array to 0
	int average_weight = 0;
	
	//check if file was succesfully opened for reading
	if(fp == NULL){

		printf("Failed to open FIle...\n");
		exit(1);
	}
	int counter = 0; //counts number of values in file to allocate size of array to contain!
	while(!feof(fp)){
		
		fscanf(fp, "%d", &elephant_raw_data[counter]);
		counter++;
	}


	printf("number of elephant_raw_data: %d\n", counter - 1);
	for(int i = 0; i < counter-1; i++)
		//calculate average weight of elephants
		average_weight += (elephant_raw_data[i] - average_weight)/(i + 1); //i + 1 because indexing starts from zero
	printf("average_elephant_seal_weight: %d\n", average_weight );
	fclose(fp);

	return 0;
}