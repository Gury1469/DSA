#include<iostream>

using namespace std;

void bubbleSort(int* arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main()
{
    int arr[7]={45,487,379,332,48,33,3};
    bubbleSort(arr,7);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}