#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res = arr[i] ^ res;
    }
    return res;
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size = 7;
    int arr[size] = {2, 3, 1, 6, 3, 6, 2};

    printArr(arr, size);

    int uniqueVal = findUnique(arr, size);
    cout << "Unique Value: " << uniqueVal << endl;
}
