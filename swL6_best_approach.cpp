/*Given an array arr[] of size N and an integer k.
Find the maximum for each and every continuous subarray
of size k*/
#include<bits/stdc++.h>
using namespace std;
vector<int> sliding_window_max(int arr[],int n)
{
vector<int>v;
int i=0;
int j=0;
int k=3;
list<int>l;
while(j<n)
{
while(l.size()>0 && l.back()<arr[j])
{
l.pop_back();
}
l.push_back(arr[j]);
if((j-i+1)<k)
    j++;
else if((j-i+1)==k)
{
v.push_back(l.front());
if(l.front()==arr[i])
l.pop_front();
i++;
j++;
}
}
return v;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
 vector<int>v=sliding_window_max(arr,n);
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
