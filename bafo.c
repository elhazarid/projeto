//feito
#include<stdio.h>
int main (void)
{
   int rodada;
      int cont;
      int totala=0,totalb=0;
      int a;
      int b;
      int testen=0;
  while (1)
    {
      //char x[4];
      testen = testen+1;
     
      scanf("%d",&rojjjjdada);
      if (rodada == 0)
	{
	  break;
	}
      cont = 0;
      totala = 0;
      totalb = 0;
      while (cont < rodada)
      {
	scanf("%d",&a);
	scanf("%d",&b);
	totala = a+totala;
	totalb = b+totalb;
	//printf("%d %d\n",totala,totalb);
	cont++;
      }
      if (totala > totalb)
		    {

		      printf("Teste %d\nAldo\n\n",testen);
		    }
      if (totalb > totala)
		    {
		      printf("Teste %d\nBeto\n\n",testen);
		    }
    }

  return 0;
}
