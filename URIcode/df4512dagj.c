#include<stdio.h>
    int main(){
       /* int a;
        printf("Enter your year:\n");
        scanf("%d ",&a);
        if((a%4)!=0){
        printf("Your year is NOT LEAP YEAR");
    }
    else{
        printf("Your year is LEAP YEAR");
    }*/
   /* int a,b,c;
    printf("Enter your three number:");
    scanf("%d  %d  %d",&a,&b,&c);
    if(a>b){
        printf("A is getter than B: ",a);
    }
    else if(a<b){
        printf("B is getter than A:",b);
    }
    else if(a<c) {
        printf("C is gatter than A: ",c);
    }*/

    int a;
    printf("Enetr your marks:");
    scanf("%a",&a);
    if((a>=80)&&(a<=100)){
        printf("you got A+");
    }
    else if((a<70)&&(a>=79)){
        printf("you got A");
    }
     else if((a<60)&&(a>=69)){
        printf("you got B");
    }
     else if((a<50)&&(a>=59)){
        printf("you got C");
    }
    else if((a<40)&&(a>=49)){
        printf("you got D");
    }
    else if((a<33)&&(a>=39)){
        printf("you got E");
    }
     else {
        printf("you got F");
    }

    return 0;

}
