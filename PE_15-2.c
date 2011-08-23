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

#define HARMONIC_MEAN(X,Y) (1/((1/2)*((1/(X))+(1/(Y)))))

typedef char * string;

void printHarmMean(double, double);

int main (void) {
  for(int i = 1, j = 10; i < 10; i++, j*=i) {
    printHarmMean(i,j);
  }
  return 0;
}

void printHarmMean(double x, double y) {
  fprintf(stdout, "\nharmonic mean of %lf, %lf is: %lf",x,y, HARMONIC_MEAN(x,y));
}
