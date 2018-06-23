#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = (p - 1);
    int j;

    for (j = p; j <= r- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return (i + 1);
}

void quickSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = partition(arr, p, r);

        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int s;
    printf("Enter array size: ");
    scanf("%d", &s);
    //int arr[] = {10, 7, 8, 9, 1, 5};
    int arr[s], i;
    printf("Enter array elements: ");
    for(i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
