/*Given an array arr[] of size N and an integer k.
Find the maximum for each and every continuous subarray
of size k*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   int mx=INT_MIN;
  for(int i=0;i<n-3+1;i++)
  {
  	for(int j=i;j<i+3;j++)
  	{
  	  mx=max(mx,arr[j]);
  	}
  	cout<<mx<<" ";
  } 

}

