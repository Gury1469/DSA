#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int l,int r)
{
    int index,pivot=arr[r];
    
    return index;
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