#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[]) {

  printf("%s\n", argv[1]);
  printf("%s\n", argv[2]);

  char operation[2];
  strcpy(operation,argv[1]);
  char angle[10];
  strcpy(angle,argv[2]);


  if (operation == "-s") {
    printf("Função em seno\n");
  }
  if (operation == "-s") {
    printf("Função em seno\n");
  }
  else{
    printf("Erro na entrada de parâmetro  \n" );
  }


  return 0;
}
