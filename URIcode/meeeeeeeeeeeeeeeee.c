#include<stdio.h>
int arr[20];
int merge_sort(int arr,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
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
    i=0,j=0;
    for(i=0;i<n1;i++)
        arr1[i]=arr1[i+1];
            for(j=0;j<n2;j++)
                arr2[j]=arr[m+j+1];
                 arr1[i]=999;
                 arr2[j]=999;
                 for(k=1;k<=h;k++){
                    if(arr[i]<=arr[j])
                    arr[k]=arr[i++];
                        else
                            arr[k]=arr[j+1];
                 }
                 return 0;
}
int main(){
    int i,n;
    printf("Enter Your Size of arr:\n");
    scanf("%d",&n);
    printf("Enter your Element of Arr:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}
