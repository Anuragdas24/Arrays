#include<bits/stdc++.h>
using namespace std;

int fun(int a[], int n, int sum){

   int min_length=INT_MAX;

   for(int i=0; i<n; i++){
     int curr_sum = a[i];
     if(curr_sum>sum) return 1;
     for(int j=i+1; j<n; j++){
         curr_sum += a[j];
         if(curr_sum>sum and min_length>(j-i+1))
          min_length = (j-i+1);
     }
   }
   return min_length;
}
int main(){

   int n;
   cin>>n;
   
   int a[n];
   for(int i=0; i<n; i++)
   cin>>a[i];

   int sum;
   cin>>sum;

   if(fun(a, n, sum)==INT_MAX)
   cout<<"No such subarray found";

  else cout<<fun(a, n, sum);

}