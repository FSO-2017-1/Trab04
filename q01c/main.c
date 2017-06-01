#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>


int main(int argc, char const *argv[]) {

  void *handle;
  double (*seno)(double);
  double (*arc_seno)(double);
  char *error;

  handle = dlopen("./libseno.so",RTLD_LAZY);
  if(!handle)
  {
    printf("%s\n", dlerror());
    exit(1);
  }

  seno  = dlsym(handle, "seno");
  if((error = dlerror()) != NULL)
  {
    printf("%s\n", error);
    exit(1);
  }

  arc_seno  = dlsym(handle, "arc_seno");
  if((error = dlerror()) != NULL)
  {
    printf("%s\n", error);
    exit(1);
  }

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

  dlclose(handle);

}
