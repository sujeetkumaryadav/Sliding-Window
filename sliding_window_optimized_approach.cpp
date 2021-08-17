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
    int i=0,sum=0;
      int j=0;
      while(j<n)
      {
        sum=sum+arr[j];
        if((j-i+1)<sz)
        {
            j++;
        }
        else if((j-i+1)==sz)
        {
            mx=max(mx,sum);
            sum=sum-arr[i];
            i++;
            j++;
        }
      }
    cout<<endl;
    cout<<mx<<endl;
}