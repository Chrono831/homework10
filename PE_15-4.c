/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * PE_15-4.c
 *
 * Created: Aug 23 2011 16:59:33
 *
 */

#include "dylanstdhdr.h"

typedef char * string;

void wait(double);

int main (void) {
  double delay = 1;
  for(int i = 0; i < 10; i++) {
    putchar('i');
    wait(delay);
  }


  return 0;
}

//time is in seconds
void wait(double time) {
  clock_t start = clock();
  while ( ( ((double)(clock() - start)) / (CLOCKS_PER_SEC) ) < time )
    ; //wait
  return;
}
