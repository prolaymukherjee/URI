#include<stdio.h>
int arr[10]={1,2,3,4,5,6,7,8,9};
int arrsize=10;
int print(){
    int i=0;
    for(i=0;i<arrsize;i++){
        printf("%d | %d\n",i,arr[i]);
    }
}
int binsearch(int val){
    int start=0;
    int end=arrsize -1;
    int i,j;
    int mid=(end+start)/2;
    printf("%d",mid);
    while(start<=end && arr[mid!=val]){
        int mid=(start+end)/2;
        if(arr[mid]<val){
            start=mid+1;
        }
        else if(arr[mid]>val){
            end=mid-1;
        }
        else{
            printf("the value is found index %d",val);
            return mid;
            start=end+1;
        }
    }
    if(start>end){
        return -1;
    }
    return mid;
    printf("%d is the index ",mid);
    }
 int main(){
    print();
    int val=3;
    int index=binsearch(3);
    printf("\n index is  %d\n",val,index);
 }

