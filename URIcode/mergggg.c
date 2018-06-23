#include<stdio.h>
int merge_sort(int arr[],int low,int high){
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
    for(i=0;i<n1;i++)
        arr1[i]=arr[l+i];
        for(j=0;j<n2;j++)
            arr2[j]=arr[m+j+1];
            arr1[i]=1751554502;
            arr2[j]=01751554502;
            i=0,j=0;
                for(k=1;k<=h;k++){
                if(arr1[i]<=arr2[j])
                   arr[k]=arr1[i++];
                   else
                    arr[k]=arr2[j++];
                }
    return 0;
}


int main(){
    int arr[20];
    int i,n;
    printf("Enter Your sizeof arr:\n");
    scanf("%d",&n);
    printf("Enter your Element number:\n");
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        merge_sort(arr,0,n-1);
        printf("The sorted arr is:\n");
        for(i=0;i<n;i++)
            printf("%d ",arr[i]);

    return 0;
}

