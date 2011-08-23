/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * PE_15-2.c
 *
 * Created: Aug 23 2011 14:55:30
 *
 */

#include "dylanstdhdr.h"

#define HARMONIC_MEAN(X,Y) (1 / (((1/x) + (1/y)) / 2))

typedef char * string;

void printHarmMean(double, double);

int main (void) {
  for(int i = 1, j = 10; i < 100; i*=2, j*=2) {
    printHarmMean(i,j);
  }
  return 0;
}

void printHarmMean(double x, double y) {
  fprintf(stdout, "\nharmonic mean of %lf, %lf is: %lf",x,y, 
	  HARMONIC_MEAN(x,y) );
}
