/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * dylanstdhdr.h
 *
 *
 */

#ifndef DYLANSTDHDR_H_
#define DYLANSTDHDR_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

#ifdef DEBUG
  #define Dd(X) (fprintf(stderr, #X " digit value : %d\n", (X)), (X) )
  #define Ds(X) (fprintf(stderr, #X " string value : %s\n", (X)), (X) )
  #define Df(X) (fprintf(stderr, #X " float value : %f\n", (X)), (X) )
#else
  #define Df(X) (X) 
  #define Df(X) (X)
  #define Df(X) (X)
#endif


#endif
