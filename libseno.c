
//Função que calcula, recursivamente, o fatorial de n.
int fatorial (int n) {
  if ((n==1) || (n==0)) return 1;
    else
      return fatorial(n-1)*n;
}
