#include<stdio.h>

void printAll(int A[]){
    int i;
    printf("---Start---\n\n");
    for(i = 0; i < 9; i++){
        printf("%d | %d\n", i, A[i]);
    }
    printf("\n\n---End---\n\n");
}
void swapX(int *i1, int *i2){
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}
int Partition(int A[], int start, int end){
    int pivot = A[end];
    int partitionIndex = start;
    int i;
    for(i = start; i < end; i++){
        if(A[i] <= pivot){
            swapX(&A[i], &A[partitionIndex]);
            partitionIndex++;
        }
    }
    swapX(&A[partitionIndex], &A[end]);
    return partitionIndex;
}
void quick(int A[], int start, int end){
    if(start < end){
        int pIndex = Partition(A, start, end);
        quick(A, start, pIndex-1);
        quick(A, pIndex+1, end);

    }
}
int main(){
    int A[] = {7,6,5,4,8,3,9,6,2};
    printAll(A);
    quick(A, 0, 8);
    printAll(A);
}
