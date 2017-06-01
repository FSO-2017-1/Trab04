#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libseno.h"

int main(int argc, char const *argv[]) {

  double angulo;

  sscanf(argv[2], "%lf", &angulo);

  if (strcmp(argv[1], "-s")==0) {
    double senao = seno(angulo);
    printf("seno (%.2lf) = %lf\n", angulo, senao);

  }else if (strcmp(argv[1], "-a")==0) {
    double arc_senao = arc_seno(angulo);
    printf("arc_seno (%lf) = %lf\n", angulo, arc_senao);
  }else{
    printf("Erro na entrada de parâmetro  \n" );

  }
}
