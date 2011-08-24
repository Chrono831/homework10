/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * PE_15-5.c
 *
 * Created: Aug 24 2011 16:08:42
 *
 */

#include "dylanstdhdr.h"

typedef char * string;

void lottery(int *, int, int);

int main (void) {
  srand(time(NULL));
  int size = rand() % 1000 + 1; //size 1 -> 1000
  int arr[size];
  for(int i = 0; i < size; i++) {
    arr[i] = i;
  }//populate array
  lottery(arr, size, 10);
  
  return 0;
}


void lottery(int *arr, int arrSize, int picks) {
  fprintf(stdout,"The following %d numbers have been picked:\n", picks);
  bool *picked = (bool *)calloc(arrSize, sizeof(bool)); 
  srand( time(NULL) );
  for(int i = 0; i < picks; i++) {
    int j;
    do {
      j = rand() % arrSize; //pick one array slot 
    } while(picked[j]);
    fprintf(stdout, "%d ",arr[j]);  
    picked[j] = true;
    
  }
  fprintf(stdout,"\n");
}
