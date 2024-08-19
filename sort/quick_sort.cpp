#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void sorter(int arr[], int low, int high)
{
    if (low < high){
        int pi = partition(arr , low , high ) ; 
        sorter(arr,low,pi-1) ; 
        sorter(arr , pi+1, high)  ; 
    }
}
void quickSort(int arr[] , int n) {
    sorter(arr , 0 , n-1) ; 
}
int main()
{
    int N ; 
    cin >> N ; 
    int arr[N],index ; 
    for(index = 0 ; index < N ; index++) {
        cin >> arr[index] ; 
        
    }
    quickSort(arr,N) ; 
    for(auto it : arr) cout << it << " " ; 
    return 0;
}