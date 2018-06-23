#include<stdio.h>
int merge_sort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr,mid,low);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    return 0;
}
int merge(int arr[],int l,int m,int h){
    int arr1[20],arr2[20];
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=h-m;

}
