#include<bits/stdc++.h>
using namespace std;

int primeNumber(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)return -1;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
     for (int i =2;i<=n;i++)
    {
       if(i==2)
        {
            cout<<"2 ";
        }
        else
        {

            int num=primeNumber(i);
            if(num!=-1)cout<<i<<" ";

        }
    }
}
