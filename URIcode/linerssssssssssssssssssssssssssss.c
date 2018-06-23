#include<stdio.h>
int arr[10]={9,8,0,1,7,5,2,3,6};
int size=10;
int print(){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d | %d \n",i,arr[i]);
    }

}
int liner(int val){
    int i=0;
    printf("%d is the value of index is:",i);
    for(i=0;i<size;i++){
        if(arr[i]==val){
        printf("%d",val);
    }
  }
  return -1;
}

int main(){
   print();
   int val=3;
   liner(5);
}
