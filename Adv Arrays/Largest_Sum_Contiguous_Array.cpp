#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int res = INT_MIN;
    
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            res = max(sum, res);    
        }
    }
    
    cout<<res;
}