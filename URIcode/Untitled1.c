#include<stdio.h>
int arr[]={1,2,3,4,5};
int size=6;
int print(){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d| %d\n",i,arr[i]);
    }
}
int main(){
    print();
}
