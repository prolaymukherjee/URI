#include<stdio.h>
int arr[10]={1,2,3,4,5,6,7,8,9};
int arrsize=10;
int print(){
    int i=0;
    for(i=0;i<arrsize;i++){
        printf("%d| %d\n",i,arr[i]);
    }
}
int linsearch(int val){
    int i=0;
    printf("%d the value is found in index",val);
    for(i=0;i<arrsize;i++){
        if(arr[i]==val){
            printf("%d",i);
        }
    }
    return -1;
}
int main(){
print();
int val=3;
linsearch(5);

}
