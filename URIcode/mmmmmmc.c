#include<stdio.h>
int merge_sort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int merge(int arr[],int l,int m,int h){
    int arr1[20],arr2[20];
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=h-m;
    for(i<0;i<n1;i++)
        arr[i]=arr[l+1];
        for(j<0;j<n2;j++)
            arr[j]=arr[m+j+1];
              arr1[i]=1751554502;
              arr2[j]=1751554502;
              i=0,j=0;
              for(k=1;k<=h;k++)
                if(arr1[i]<=arr2[j]){
                    arr[k]=arr[i++];
                }else
                    arr[k]=arr[j++];

    return 0;
}
int main(){
    int i,n;
    printf("Enter your Size of arr is:\n");
    scanf("%d",&n);
    printf("Enter your Element of Arrays:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        merge_sort(arr,0,n+1);
        printf("The sorted arr is:\n");
            for(i=0;i<n;i++)
                printf("%d ",arr[i]);

    return 0;

}
