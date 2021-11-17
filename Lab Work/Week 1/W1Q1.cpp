#include<iostream>
using namespace std;

void findComparison(int arr[],int n,int target){
    int comp=0,i=0;
    while(i!=n){
        comp+=1;
        if(arr[i]==target)
        {
            break;
        }
        i+=1;
    }
    if(i==n)
    {
        cout<<"Not Present "<<comp<<endl;
        return ;
    }
    cout<<"Present "<<comp<<endl;
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
