#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = removeDuplicate(arr, n);
    cout << "The size of the array after removing the duplicates from the array is " << result;

    return 0;
}