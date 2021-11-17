#include <iostream>
using namespace std;
 
 int comp=0,swaps=0;

void swap(int* a, int* b)
{
    swaps+=1;
    int t = *a;
    *a = *b;
    *b = t;
}
 
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 
 
    for (int j = low; j <= high - 1; j++)
    {
        comp+=1;
        if (arr[j] < pivot)
        {

            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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
        quickSort(arr, 0, n - 1);
        for(int i=0;i<=n-1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons = "<<comp<<"\n"<<"Swaps = "<<swaps<<endl;
        swaps=0;comp=0;

    }
    return 0;
}

