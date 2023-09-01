#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int l,int r)
{
    int pivot=arr[r];
    int x=l-1;
    for(int i=l;i<r;i++)
    {
        if(arr[i]<pivot)
        {
            x++;
            swap(arr[i],arr[x]);
        }
    }
    x++;
    swap(arr[x],arr[r]);

    return x;       //returning correct position of pivot element
}
void quickSort(vector<int>& arr,int l,int r)
{
    if(l<r)
    {
        int index=partition(arr,l,r);

        quickSort(arr,l,index-1);
        quickSort(arr,index+1,r);
    }
}
void quickSort(vector<int>& arr)
{
    quickSort(arr,0,arr.size()-1);
}

int main()
{
    vector<int> arr={45,487,379,332,48,33,3};
    quickSort(arr);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}