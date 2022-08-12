#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int ary[],int n)
{
    for(int i=1;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-i;j++)
        {
            if(ary[j]>ary[j+1])
            {
                swap(ary[j],ary[j+1]);
                flag=1;
            }
        }
        if(flag==0)break;
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    int ary[n];
    for(int i=0;i<n;i++)
    {
        cin>>ary[i];
    }

    bubbleSort(ary,n);

    cout<<k<<"th minimum = "<<ary[k-1]<<endl;
    cout<<k<<"th maximum = "<<ary[n-k]<<endl;

}
