#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    int temp[n];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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

    int d;
    cout << "Enter the distance between array elements: ";
    cin >> d;

    leftRotate(arr, n, d);

    return 0;
}