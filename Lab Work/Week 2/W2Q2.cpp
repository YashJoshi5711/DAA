#include<iostream>
using namespace std;

bool findIndex(int arr[],int n,int x,int ind)
{
    int i=0,j=n-1,mid;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            cout<<i+1<<" , "<<j+1<<" , "<<ind+1<<endl; 
            return false;
        }
        if(arr[i]+arr[j]>x)
        {
            j-=1;
        }
        else
        {
            i+=1;
        }
    }
    return true; 
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<=n-1;i++)
        {
            cin>>arr[i];
        }
        int i=0;
        while(i!=n)
        {
            if(!findIndex(arr,n,arr[i],i))
            {
                break;
            }
            i+=1;
        }
        if(i==n)
        {
            cout<<"No Sequence Found"<<endl;
        }
    }
    return 0;
}
