#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid size!" << endl;
        return 1;
    }
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "enter the value for array" << i << ":";
        cin >> arr[i];
    }

    cout<<"Enter the elemnts of the array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = INT_MAX;

    for (int i = 0; i < n;i++)
    {
        if(arr[i] < min)
        {
            min=arr[i];
        }
    }
    cout<< min;
}