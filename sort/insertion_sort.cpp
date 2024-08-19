#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 24, 44, 90};
    int size, safe, poi, shift;
    size = sizeof(arr) / sizeof(arr[0]);
    for (int addon = 1; addon < size; addon++)
    {
        for (poi = 0; arr[addon] > arr[poi]; poi++);
        safe = arr[addon];
        for (shift = addon - 1; shift >= poi; shift--)
        {
            arr[shift + 1] = arr[shift];
        }

        arr[poi] = safe;
    }

    for (int ind = 0; ind < size; ind++)
        cout << arr[ind] << " ";
    return 0;
}
