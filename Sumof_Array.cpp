#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[] = {10,20,30,40,50};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     int sum = 0;

//     for(int i = 0;i < n;i++)
//     {
//         sum+=arr[i];
//     }
//     cout<<sum;
// }

int getSum(int arr[] , int index){
    if(index==0)
        return arr[index];

    return arr[index] + getSum(arr,index-1);
}
int main()
{
   int arr[] = {10, 20, 30, 50, 89};

   int n = sizeof(arr)/sizeof(arr[0]); 

   cout<<getSum(arr, n-1);
}