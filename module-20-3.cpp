#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ary[n];

    for(int i=0;i<n;i++)
    {
        cin>>ary[i];
    }
    int prefixSum[n];
    prefixSum[0]=ary[0];

    for(int i=1;i<n;i++)
    {
        prefixSum[i]=prefixSum[i-1]+ary[i];
    }
     int query;
     cin>>query;
     for(int i=1;i<=query;i++)
     {
         int r,q,sum;
         cin>>r>>q;
         if(r==1)
         {
            sum=prefixSum[q-1];
         }
         else
         {
            sum=prefixSum[q-1]-prefixSum[r-2];
         }
         cout<<sum<<endl;
     }
}
