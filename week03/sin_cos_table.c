/*
  Print sine and cosine table between 0 and 1

*/

#include <stdio.h>
#include <math.h> // gets cos() and sin() functions here

#define MIN 0
#define MAX 1

int main(void)
{
  double interval;
  int i;

  printf("X\t\t|SIN(X)\t\t|COSINE(X)\n");
  for(i = 0; i < 25; i++)
  {
    printf("_________________________________________\n");

    interval = (i == 0 ? (i + 0.02) : i) / 25.0; // ensures that inverval shouldn't start from 0
    printf("%.3lf\t\t|%.3lf\t\t|%.3lf\n", interval, sin(interval), cos(interval) );
  }
  printf("_________________________________________\n");
  return 0;
}
