#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libseno.h"

int main(int argc, char const *argv[]) {

  printf("%s\n", argv[1]);
  printf("%s\n", argv[2]);
  double angulo;

  sscanf(argv[2], "%lf", &angulo);


  if (strcmp(argv[1], "-s")==0) {
    printf("Função em seno\n");
    double senao = seno(angulo);
    printf("seno (%.2lf) = %lf\n", angulo, senao);

  }else if (strcmp(argv[1], "-a")==0) {
    printf("Função em arcoseno\n");
    double arc_senao = arc_seno(seno(angulo));
    printf("arc_seno (%lf) = %lf\n", angulo, arc_senao);
  }else{
    printf("Erro na entrada de parâmetro  \n" );

  }
}
