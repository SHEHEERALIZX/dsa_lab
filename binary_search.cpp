#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int SearchKey)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == SearchKey)
            return mid;

        if (arr[mid] > SearchKey)
            return binarySearch(arr, low, mid - 1, SearchKey);

        if (arr[mid] < SearchKey)
            return binarySearch(arr, mid + 1, high, SearchKey);
    }

    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int high = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "Enter key";
    cin >> k;

    int val = binarySearch(arr, 0, high - 1, k);
    if (val == -1)
    {
        cout << "Element not Found";
    }
    else
    {
        cout << "Element found";
    }

    return 0;
}