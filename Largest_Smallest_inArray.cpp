#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 67, 89, 78, 34, 2, 95};

    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX, largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(smallest > arr[i])
        smallest = arr[i];

        if(largest < arr[i])
        largest = arr[i];
    }
    cout<<smallest<<endl<<largest;
}