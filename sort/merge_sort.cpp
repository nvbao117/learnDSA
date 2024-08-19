#include <iostream>

using namespace std;

void mergeArray(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int A[n1], B[n2];
    for (int i = 0; i < n1; i++)
    {
        A[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        B[j] = arr[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (A[i] < B[j])
            arr[k++] = A[i++];
        else
            arr[k++] = B[j++];
    }
    while (i < n1)
        arr[k++] = A[i++];
    while (j < n2)
    {
        arr[k++] = B[j++];
    }
}
void mergeSort(int arr[], int l, int h)
{
    if (l >= h)
        return;
    int m = (l + h - 1) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, h);
    mergeArray(arr, l, m, h);
}
void printSortedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {9, 3, 7, 6, 5, 4, 8, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    printSortedArray(arr, arr_size);
    return 0;
}