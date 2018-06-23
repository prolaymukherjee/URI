#include<stdio.h>
int arr[]={99,88,77,66,55,44,33,22,11};
int size=9;
int print(){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d| %d\n",i,arr[i]);

    }

}
int lin(int val){
    int i=0;
    printf("%d is the number of the element index is:",val);
    for(i=0;i<size;i++){
        if(arr[i]==val){
            printf("%d",i);
        }
    }
    return -1;
}
int main(){
    print();
    int val=55;
    lin(55);
}
