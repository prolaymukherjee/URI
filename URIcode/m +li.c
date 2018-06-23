#include<stdio.h>
/*int merge_sort(int arr[],int low,int high){
    int mid;
    if(low<high){
    mid=(low+high)/2;
    merge_sort(arr,mid,low);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);

    }
}
int merge(int arr[],int l,int m, int h){
    int arr1[20],arr2[20];
    int i,j,k,n1,n2;
    n1=m-l+1;
    n2=h-m;
    for(i=0;i<n1;i++)
        arr[i]=arr[i+1];
            for(j=0;j<n2;j++)
                arr[j]=arr[m+j+1];
    arr1[i]=99999;
    arr1[j]=99999;
    i=0,j=0;
        for(k=1;k<=h;k++){
            if(arr[i]<=arr[j]){
             arr[k]=arr[i++];
           } else
                arr[k]=arr[j++];
        }
    return 0;
}
int main(){
    int i,n;
    printf("Enter your size of arr is:\n");
    scanf("%d",&n);
    printf("Enter your element of this arr:\n");
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    merge_sort(arr,0,n-1);
    for(i=0;i,n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/


/*int arr[]={11,22,33,44,55,66,77,88,99};
int size=10;
print(){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d| %d\n",i,arr[i]);
    }
}
int lin(int val){
    int i=0;
    printf("%d the value of the index is:",val);
    for(i=0;i<size;i++){
        if(arr[i]==val){
            printf("%d",i);
        }
    }
    return -1;
}
int main(){
    print();
    lin(99);
}
*/
int arr[]={1,2,3,4,5,6,7,8,9};
int size=10;
int print(){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d| %d\n",i,arr[i]);
    }
}
int bin(int val){
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
            printf("%d the value is the index is:",val);
            return mid;
            start=end+1;
        }
    }
    if(start>end){
        return -1;
    }
    return mid;
    printf("%d is the index is;",mid);
}
int main(){
    print();
    int val=3;
    int index=binsearch(3);
    printf("\n index is  %d\n",val,index);
    return 0;
}
