#include <bits/stdc++.h>
using namespace std;

int secSmallest(int arr[],int n)
{
    int smallest = arr[0];

    for(int i= 0;i<n;i++)
    {
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    int sec_smallest=INT_MAX;
    for(int i= 0;i<n;i++)
    {
        if(arr[i] > smallest && arr[i]<sec_smallest )
        sec_smallest=arr[i];
    }
    return sec_smallest;
}

int main()
{
    int n;
    cout << "enter the no. of elements";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value for array" << i << ":";
        cin >> arr[i];
    }

    cout << "elements of the array are:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    cout<<secSmallest(arr.data(),n);
}