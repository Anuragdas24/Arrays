#include <iostream>
#include <vector>
#include <climits>
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
        cout << "Enter the value for arr" << i << ": ";
        cin >> arr[i];
    }
    cout << "Elements of the array are:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max_element = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max_element)
        max_element=arr[i];
    }
    cout<<"Largest element in the array:"<<max_element;

    return 0;
}
