/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * PE_15-6.c
 *
 * Created: Aug 24 2011 16:38:06
 *
 */


typedef char * string;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 10

const string firstNameList[] = { "Ben", "Dan", "Tim", "Kyle", "Brad",
			       "Lisa", "Emma", "Abby", "Kim", "Val" };
const string lastNameList[] = { "Jones", "Thompson", "Kim", "Nyguen", "Vu",
			      "Tran", "Potter", "Weasley", "Malfoy", "deMort" };

typedef struct {
  string first;
  string last;
} names;

void fillarray(names ar[], int n);
void showarray(const names ar[], int n);
int mycomp(const void * p1, const void * p2);

int main(void) {
  names vals[NUM];
  fillarray(vals, NUM);
  printf("Random list:\n");
  showarray(vals, NUM);
  qsort(vals, NUM, sizeof(double), mycomp);
  printf("\nSorted list (by First then Last name):\n");
  showarray(vals, NUM);
  return 0;
}

void fillarray(names ar[], int n) {
  for(int i = 0; i < n; i++) {
    names temp;
    temp.first = firstNameList[i % NUM ];
    temp.last = lastNameList[i % NUM];
    ar[i] = temp;
  }
}

void showarray(const names ar[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    names temp = ar[i];
    printf("%s %s\n", temp.first, temp.last);
  }
  if (i % 6 != 0) putchar('\n');
}

/* sort by first name, last name */
int mycomp(const void * p1, const void * p2) {
  /* need to use pointers to double to access values   */
  const names *a1 = (const names *) p1;
  const names *a2 = (const names *) p2;
  if (strncmp(a1->first,a2->first, 40) > 0)
    return 1;
  else if (strncmp(a1->first,a2->first, 40) == 0) {
    //    if (strncmp(a1->last,a2->last, 40) > 0)
    //  return 1;
    // else if (strncmp(a1->last,a2->last, 40) < 0)
    //  return -1;
    //else
      return 0; 
  } else
    return -1;
}

  
