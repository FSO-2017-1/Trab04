#include <math.h>

//Função que calcula, recursivamente, o fatorial de n.
int fatorial (int n) {
  if ((n==1) || (n==0)) return 1;
    else
      return fatorial(n-1)*n;
}

double seno(double angulo){
	double seno=0, auxSeno=0;
	int i;

	for(i=0; i<10; i++){
		auxSeno = (pow((-1),i)*(pow(angulo,(2*i+1)))/fatorial(2*i+1));
		seno = seno + auxSeno;
	}
	return seno;
}

double arc_seno(double seno){
	double arc_seno;

	arc_seno = seno + pow(seno, 3) / 6 + 3 * (pow (seno, 5))/40 + 5 * (pow(seno, 7))/112 + 35 * (pow(seno, 9))/1152;

	return arc_seno;
}