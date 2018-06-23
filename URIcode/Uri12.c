#include<stdio.h>
int main()
{
            double a,b,c,pie=3.14159,half=.5,m,n,o,p,q;
            while(scanf("%lf %lf %lf",&a,&b,&c)==3){
                  m=half*(a*c);
                  n=pie*(c*c);
                  o=half*(a+b)*c;
                  p=b*b;
                  q=a*b;
                        printf("TRIANGULO: %.3f\n",m);
                        printf("CIRCULO: %.3f\n",n);
                        printf("TRAPEZIO: %.3f\n",o);
                        printf("QUADRADO: %.3f\n",p);
                        printf("RETANGULO: %.3f\n",q);

            }
            return 0;
}
