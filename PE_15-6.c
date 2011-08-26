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
 * Randomly picks name pairs; sorts by first name then last name.
 *
 */


#include "dylanstdhdr.h"

#define NUM 30
#define MAX_STRLEN 40
#define NUM_NAMES 12

const string firstNameList[] = {
  "Harry", "Ron", "Lucious", "Val", "Sirius", "Shinji", "Rei", "Asuka", "Misato",
  "Touji", "Keisuke", "Kaworu" };
const string lastNameList[] = { 
    "Potter", "Weasley", "Malfoy", "deMort", "Black", "Ikari", "Ayanami",
    "Langley Sohryu", "Katsuragi", "Susuhara", "Iida", "Nagisa" };

typedef struct {
  string first;
  string last;
} names;

void fillarray(names ar[], int n);
void showarray(const names ar[], int n);
int mycomp(const void * p1, const void * p2);
int complast(const void *p1, const void *p2);
int compfirst(const void *p1, const void *p2);

int main(void) {
  names vals[NUM];
  fillarray(vals, NUM);
  printf("Random list:\n");
  showarray(vals, NUM);
  qsort(vals, NUM, sizeof(names), mycomp);
  printf("\nSorted list (by First then Last name):\n");
  showarray(vals, NUM);
  return 0;
}

void fillarray(names ar[], int n) {
  srand( time(NULL) );
  for(int i = 0; i < n; i++) {
    (ar + i)->first = firstNameList[rand() % (NUM_NAMES ) ];
    (ar + i)->last = lastNameList[rand() % (NUM_NAMES )];
  }
}

void showarray(const names ar[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%s %s\n", (ar + i)->first, (ar + i)->last);
  }
}

/* sort by first name then last name */
int mycomp(const void * p1, const void * p2) {
  int comp[] = { compfirst(p1, p2), complast(p1, p2) };
  if (comp[0] == 1) { return 1; } //first wins
  if (comp[0] == -1) { return -1; } //first loses
  //first is a tie
  if (comp[1] == 1) { return 1; } //last wins
  if (comp[1] == -1) { return -1; } //last loses
  return 0;  //names both the same
}

int compfirst(const void *p1, const void *p2) {
  const names *a1 = (const names *) p1;
  const names *a2 = (const names *) p2;
  return strcmp(a1->first, a2->first);
}

int complast(const void *p1, const void *p2) {
  const names *a1 = (const names *) p1;
  const names *a2 = (const names *) p2;
  return strcmp(a1->last, a2->last);
} 
