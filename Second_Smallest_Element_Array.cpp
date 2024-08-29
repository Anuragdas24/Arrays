#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {90, 78, 67, 56, 7, 61, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > first && arr[i] < second)
        {
            second = arr[i];
        }
    }
    cout << second;
}
