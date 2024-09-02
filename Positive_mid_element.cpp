#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> positive_numbers;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            positive_numbers.push_back(arr[i]);
        }
    }

    int mid_index = (positive_numbers.size() - 1) / 2;

    cout << positive_numbers[mid_index] << endl;

    return 0;
}