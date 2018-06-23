#include<stdio.h>
int main(){
    int i,t,n;
    printf("Enter your index number:\n");
    scanf("%d",&n);
    int arr[n];
    int element, r;
    printf("Enter your Element:\n");
    for(r=0;r<n;r++){
        scanf("%d",&element);
        arr[r]=element;
    }
    for(i=1;i<n;i++){
        int d=i;
        while(d>0 && arr[d]<arr[arr[d-1]){
            t=arr[d];
            arr[d]=arr[d-1];
            d--;
        }

    }
    printf("The sorted arr is:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}
