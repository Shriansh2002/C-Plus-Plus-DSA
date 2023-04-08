#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    // Iterate till all the elements are sorted
    while (mid <= hi)
    {
        switch (a[mid])
        {

        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}

void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int v[] = {2, 1, 1, 0, 1, 2, 0, 1, 1, 0, 0, 0};
    int n = sizeof(v) / sizeof(v[0]);

    sort012(v, n);
    printArray(v, n);

    return 0;
}