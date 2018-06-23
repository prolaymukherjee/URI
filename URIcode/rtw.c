#include<stdio.h>
void add_value(){
    int a;
    int sum=0;
    for(a=0;a<=50;a++)
    sum+=a;
    printf("sum is 1 to 50\n",sum);

}
void main(){
   add_value(50);
   return 0;
}

