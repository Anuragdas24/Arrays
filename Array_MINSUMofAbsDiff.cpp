#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[]={2, 4, 5, 3};
    int result = INT_MAX;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        int sum =0 ; // variable to hold the sum
        for(int j=0; j<n; j++){
            int x=arr[i]-arr[j];
            if(x<0)
                sum += -x;

            else sum += x;
        }    
    
        if(sum<result)
            result = sum;
        
    }
    cout<<"Minimum Absolute Difference Sum is "<<result;
    return 0;
}