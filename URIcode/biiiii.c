#include<stdio.h>
int arr[]={1,2,3,4,5,6,7,8,9};
int size=10;
int print(){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d| %d\n",i,arr[i]);
    }
    return 0;
}
int bin(int val){
    int i,j;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    printf("%d",mid);
    while(start<=end && arr[mid!=val]){
        int mid=(start+end)/2;
        if(arr[mid]<val){
            start=mid+1;
        }else if(arr[mid]>val){
            end=mid-1;
        }else{
            printf("%d is the index of arr is:",val);
            return mid;
            start=mid+1;
        }
        if(start<end){
            return -1;
        }
        return mid;
        printf("%d is the index is:",mid);
    }
}

int main(){
    print();
    int val=7;
    int index=bin(7);
    printf("\n index is  %d\n",val,index);
}
