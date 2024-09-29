#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;

  vectorarr(n);

  for(int i=0; i<n; i++)
    cin>>arr[i];

  int k;
  cin>>k;

  set s(arr.begin(), arr.end());

  set::iterator itr = s.begin(); 

  advance(itr, k - 1); 

  cout <<"Minimum :"<< *itr << "\n";

  itr = s.begin();

  advance(itr, n-k); 

  cout <<"Maximum :"<< *itr << "\n";

  return 0;
}
