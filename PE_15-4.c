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
  
  double delay = 0.5;
  time_t start, finish;
  start = time(NULL);
  fprintf(stdout, "Waiting 10 seconds.\nStart time  : %ld\n", start);
  for(int i = 0; i < 20; i++) { wait(delay); }
  finish = time(NULL);
  fprintf(stdout, "Finish time : %ld\n", finish);
  fprintf(stdout, "Delta time  : %ld\n", (finish-start) );

  return 0;
}

//time is in seconds
void wait(double time) {
  clock_t start = clock();
  while ( ( ((double)(clock() - start)) / (CLOCKS_PER_SEC) ) < time )
    ; //wait
}
