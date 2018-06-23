#include<stdio.h>
int main(){
int a[10]={2,23,5,69,8,45,7,51,69,13};
int key=20;
int i=0,j=0;
for(i=0;i<10;i++){
    if(a[i]==key){
        printf("found");
        j++;
        break;
    }

}
if(j==0){
    printf("not found");
}



}

