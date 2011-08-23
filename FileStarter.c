/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * FileStarter.c
 *
 * Created: <date> <time>
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef char * string;

#ifdef DEBUG
  #define Dd(X) (fprintf(stderr, #X " digit value : %d\n", (X)), (X) )
  #define Ds(X) (fprintf(stderr, #X " string value : %s\n", (X)), (X) )
  #define Df(X) (fprintf(stderr, #X " float value : %f\n", (X)), (X) )
#else
  #define Df(X) (X) 
  #define Df(X) (X)
  #define Df(X) (X)
#endif

void writeHeader(FILE *, string);

int main (int argc, char *argv[]) {
  FILE * fout = NULL;
  if (argc != 2) {
    fprintf(stderr, "Usage: FileStarter <filename>\n");
    exit(1);
  }
  string filename = argv[1];

  fout = fopen(filename, "w");
  if (fout == NULL) {
    fprintf(stderr, "Error opening %s\n",filename);
    exit(1);
  } 
  writeHeader(fout, filename);
  fclose(fout);
  
  return 0;
}


void writeHeader(FILE *fout, string filename) {
  fprintf(fout,"/**\n * Dylan Hall\n * dylanphall\n *\n "
"* dylan.p.hall@gmail.com\n *\n * %s\n *\n * Created: %s %s\n *\n */\n\n\n"
"typedef char * string;\n\n\n\nint main (int argc, char *argv[]) {\n\n\n"
"return 0;\n}\n\n", filename, __DATE__, __TIME__);
}


