#include<stdio.h>
 int main(){
 int i=0,sum=0;
    for(i=1;i<=10;i++)
    sum+=i;
    printf("The total sum is:%d",sum);
    int a=5,b=6,c=7;
    while(--a,--b,-c){
    printf("%d %d %d\n",a,b,c);
    int a=10,b=5,c=15;
    printf("--a  --b  --c\n");
    printf("--------------------\n");
    while(--a, --b,--c){
        printf("5%d %5d %5d\n",a,b,c);
    }
    int a;
    printf("First loop work\n");
    for(a=1;a<=100;a++){
        if(a==50)
        break;
        printf("%d\n",a);
    }
    printf("second loop work\n");
    for(a=100;a>=1;a--){
         if(a==55)
         break;
        printf("%d\n",a);
    }
   printf("Even Number:\n");
    for(a=1;a<=50;a++){
        if(a%2)
        continue;
        printf("%d ",a);
    }
     printf("\nODD Number: \n");
    for(a=1;a<=50;a++){
        if(!(a%2))
        continue;
        printf("%d ",a);
    }

    return 0;
    }

