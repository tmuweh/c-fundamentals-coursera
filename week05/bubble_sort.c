/*
	Tangue Muweh
	Bubble sort
	V1.0
*/

#include <stdio.h>

#ifndef SIZE
#define SIZE 10
#endif

void swap( int *a, int *b);

int main(void)
{

	int grades[SIZE] ={20, 13, 45, 6, 34, 19, 68, 90, 23, 7};

	//before sort
	printf("Before Sort:\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d\t",  grades[i]);
	}
	printf("\n");
	for(int i = 0; i < SIZE; i ++)
		for(int j = SIZE - 1; j > 0; j--)
			if(grades[j-1] > grades[j])
				swap(&grades[j-1], &grades[j]);

	//after sort
	printf("After Sort:\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d\t",  grades[i]);
	}
	printf("\n");
	return 0;
}

void swap(int *a, int *b){
	//temporal variable to hold values
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}