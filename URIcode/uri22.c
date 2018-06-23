#include<stdio.h>
main(){
int a=0;
float n;
scanf("%f",&n);
while(n>=100){
    a++;
    n=n-100;
}
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100,00\n",a);
return 0;
}
