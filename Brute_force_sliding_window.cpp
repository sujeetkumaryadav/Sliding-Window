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
   int sz,mx=INT_MIN;
   cin>>sz;
    for(int i=0;i<n-sz+1;i++)
    {
        int sum=0;
        for(int j=i;j<i+sz;j++)
        {
        sum=sum+arr[j];
        }
        mx=max(mx,sum);
    }
    cout<<endl;
    cout<<mx<<endl;
}