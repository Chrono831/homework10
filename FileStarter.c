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

#include "dylanstdhdr.h"

void writeHeader(FILE *, string);

int main (int argc, char *argv[]) {
  FILE * fout = NULL;
  if (argc != 2) {
    fprintf(stderr, "Usage: FileStarter <filename>\n");
    exit(1);
  }
  if ( (fout = fopen(argv[1], "w")) == NULL) {
    fprintf(stderr, "Error opening %s\n",argv[1]);
    exit(1);
  } 
  writeHeader(fout, argv[1]);
  fclose(fout);
  return 0;
}


void writeHeader(FILE *fout, string filename) {
  fprintf(fout,
	  "/**\n" 
	  " * Dylan Hall\n"
	  " * dylanphall\n"
	  " *\n"
	  " * dylan.p.hall@gmail.com\n"
	  " *\n"
	  " * %s\n"
	  " *\n"
	  " * Created: %s %s\n"
	  " *\n"
	  " * Comments: \n"
	  " * \n"
	  " */\n"
	  "\n"
	  "#include \"dylanstdhdr.h\"\n"
	  "\n"
	  "\n"
	  "\n"
	  "int main (int argc, char *argv[]) {\n"
	  "  fprintf(stdout, \"Hello, World!\\n\");\n"
	  "\n"
	  "\n"
	  "  return 0;\n"
	  "}\n"
	  "\n"
	  , filename, __DATE__, __TIME__);
}


