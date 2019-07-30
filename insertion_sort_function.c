#include<stdio.h>

int insertion_sort(int arr[], int n)
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[100], n, i;
    printf("Enter array size\n");
    scanf("%d", &n);
    printf("Array element\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
