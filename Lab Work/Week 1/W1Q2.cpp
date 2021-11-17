#include<iostream>
using namespace std;

void findComparison(int arr[],int n,int target){
    int comp=0,s=0,e=n-1,mid;
    while(s<=e)
    {
        comp+=1;
        mid= s+(e-s)/2;
        if(arr[mid]==target)
        {
            cout<<"Present "<<comp<<endl;
            return;
        }
        if(arr[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    if(arr[s]==target)
    {
        cout<<"Present "<<comp<<endl;
        return;
    }
    cout<<"Not Present "<<comp<<endl;
}

int main(){
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
        int target;
        cin>>target;
        findComparison(arr,n,target);

    }
    return 0;
}
