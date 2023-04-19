#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int startEle = arr[0];
    int secondEle = arr[0];
    do
    {
        startEle = arr[startEle];
        secondEle = arr[arr[secondEle]];
    } while (startEle != secondEle);

    int ptr1 = arr[0];
    int ptr2 = startEle;
    while (ptr1 != ptr2)
    {
        ptr1 = arr[ptr1];
        ptr2 = arr[ptr2];
    }
    return ptr1;
}

int main()
{
    vector<int> v = {1, 3, 4, 2, 2};
    cout << findDuplicate(v);
    return 0;
}