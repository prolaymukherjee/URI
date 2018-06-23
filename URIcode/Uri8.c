#include <stdio.h>
int main(){
    int num,hour;
    float per_hour,salary;
    while(scanf("%d %d %f",&num,&hour,&per_hour)==3)
    {
        salary=hour*per_hour;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,salary);
    }
return 0;
}
