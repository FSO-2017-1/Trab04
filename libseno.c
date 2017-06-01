
double power(double x, int y)
{
    double temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}

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
		auxSeno = (power((-1),i)*(power(angulo,(2*i+1)))/fatorial(2*i+1));
		seno = seno + auxSeno;
	}
	return seno;
}

double arc_seno(double seno){
    double ultimo = seno;
    double soma = seno;
    int i = 1;
    for(i=1;i<=1000;i++)
    {
        ultimo*=((seno*seno)*(2*i-1)*(2*i-1))/((2*i)*(2*i+1));
        soma+=ultimo;
    }
    return soma;

}
