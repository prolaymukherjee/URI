#include<stdio.h>
void sum_of_all(){
int n,sum;
sum=0;
for(n=1;n<=100;n++)
sum+=n;
printf("sum of all number of 1 to 100 is:%d ",sum);
}
void main(){
    sum_of_all();
}
