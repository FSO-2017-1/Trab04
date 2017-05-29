
//Função que calcula, recursivamente, o fatorial de n.
int fatorial (int n) {
  if ((n==1) || (n==0)) return 1;
    else
      return fatorial(n-1)*n;
}

double seno (double angulo){
	double seno=0, auxSeno=0;
	int i;

	for(i=0; i<10; i++){
		auxSeno = ((-1)*pow(i)*(seno*pow(2*i+1)))/fatorial(2*i+1)
		seno = seno + auxSeno;
	}
	return seno;
}