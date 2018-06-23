#include<stdio.h>
int main(){
    int t,x,y,z;
    scanf("%d",&t);
    x=t/3600;
    y=t%3600/60;
    z=t%60;
    printf("%d:%d:%d\n",x,y,z);
return 0;
}

