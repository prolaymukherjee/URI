#include<stdio.h>
 int main(){
    int days,year,month,o_days;
    scanf("%d",&days);
    year=days/365;
    month=days%365/30;
    o_days=days%365%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,o_days);
 return 0;
 }
