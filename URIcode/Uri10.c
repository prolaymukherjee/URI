#include<stdio.h>
int main(){
    int code,unit[2],i;
    float price[2],total;
    for(i=0;i<2;i++){
    scanf("%d %d %f",&code,&unit[i],&price[i]);
    }
    total=((unit[0]*price[0])+(unit[1]*price[1]));
    printf("VALOR A PAGAR: R$ %.2f\n",total);
return 0;
}
