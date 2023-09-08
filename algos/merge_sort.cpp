#include<iostream>

using namespace std;

void merge(int* arr,int l,int mid,int r)
{
    int size1=mid-l+1;
    int size2=r-mid;

    int* tempArr1=new int[size1];
    int* tempArr2=new int[size2];

    //copying subarrays
    for(int i=0;i<size1;i++)
    {
        tempArr1[i]=arr[l+i];
    }
    for(int i=0;i<size2;i++)
    {
        tempArr2[i]=arr[mid+i+1];
    }

    //merging
    int i=0,j=0,k=l;
    while(i<size1 && j<size2)
    {
        if(tempArr1[i] < tempArr2[j])
        {
            arr[k]=tempArr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=tempArr2[j];
            j++;
            k++;
        }
        
    }

    while(i<size1)
    {
        arr[k]=tempArr1[i];
        i++;
        k++;
    }

    while(j<size2)
    {
        arr[k]=tempArr2[j];
        j++;
        k++;
    }

    delete[] tempArr1;
    delete[] tempArr2;
}

void mergeSort(int* arr,int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;      //we can also write (l+r)/2
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
    else
        return;

}
void mergeSort(int* arr,int size)
{
    int l=0,r=size-1;
    mergeSort(arr,l,r);

}

int main()
{
    int arr[7]={45,487,379,332,48,33,3};
    mergeSort(arr,7);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}