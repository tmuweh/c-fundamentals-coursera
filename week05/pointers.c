/*
  Tangue Muweh
  Pointers arithmetic
  V1.0
*/

#define SIZE 10

#include <stdio.h>

int main() {
  int grades[SIZE];
  int *ptr;  //pointer that points to an address in memorry
  ptr = grades;
  printf("%d\t%d\n", *ptr, *grades);
  return 0;
}
