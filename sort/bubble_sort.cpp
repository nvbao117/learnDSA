#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {5, 1, 4, 2, 4};
    int size;
    size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}