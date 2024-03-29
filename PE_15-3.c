/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * PE_15-3.c
 *
 * Created: Aug 23 2011 16:07:18
 *
 */

#include "dylanstdhdr.h"

#define DEG_TO_RAD(X) (X * 4 * atan(1) / 180) 

typedef struct {
  double r;
  double A;
} polarCoords;

typedef struct {
  double x;
  double y;
} rectCoords;

rectCoords * polarToRect(polarCoords *);
void printPolarCoordinates(polarCoords *);
void printRectCoordinates(rectCoords *);


int main (void) {
  rectCoords *rect = NULL;
  polarCoords *pol = (polarCoords *) malloc(sizeof(polarCoords));
  double mag, deg;
  fprintf(stdout,"Enter magnitude and angle pairs (in degrees) for conversion."
	  "\n example: 5 55 , 66.6 33.1\nEnter any non-number to quit.\n");
  while(scanf("%lf %lf",&mag, &deg) == 2) {
    pol->r = mag;
    pol->A = DEG_TO_RAD(deg);
    rect = polarToRect(pol);
    printPolarCoordinates(pol);
    printRectCoordinates(rect);
  }
  free(pol);
  free(rect);
  return 0;
}

void printPolarCoordinates(polarCoords *p) {
  if (p == NULL) { return; }
  fprintf(stdout,"magnitude : %.1lf | angle : %.1lf\n", p->r, p->A);
}

void printRectCoordinates(rectCoords *r) {
  if (r == NULL) { return; }
  fprintf(stdout,"x-coord : %.1lf | y-coord : %.1lf\n", r->x, r->y);
}

rectCoords * polarToRect(polarCoords *p) {
  if (p == NULL) { return NULL; }
  rectCoords *r = (rectCoords *) malloc(sizeof(rectCoords));
  r->x = ((p->r) * cos(p->A));
  r->y = ((p->r) * sin(p->A));
  return r;
}
