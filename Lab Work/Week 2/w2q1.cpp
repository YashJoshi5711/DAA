#include<iostream>
using namespace std;

int first(int arr[], int n, int x)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}

int last(int arr[], int n, int x)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<=n-1;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        int f=first(arr,n,k);
        
        int l=last(arr,n,k);
        if(f==-1 || l==-1)
        {
            cout<<"Not Present"<<endl;
        }
        else{
            cout<<k<<"-"<<l-f+1<<endl;
        }
    }
    return 0;
}

