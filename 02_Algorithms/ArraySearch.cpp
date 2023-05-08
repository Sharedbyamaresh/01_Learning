#include "iostream"
#include<stdio.h>
#include<stdint.h>

#include<stdlib.h>

using namespace std;
class ArraySearchAlgorithm
{
    public:
    int LinearSearch(int arr[],int len_Arr, int key)
    {
        for (int i=0;i<len_Arr;i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
        return -1;
    }

    int BinarySearch(int arr[], int arr_len, int key)
    {
        int strt_idx=0;
        int end_idx=arr_len-1;
        int mid_idx= int ((strt_idx + end_idx)/2);
        while(strt_idx <= end_idx)
        {
            mid_idx=int ((strt_idx + end_idx)/2);
            if(arr[mid_idx]==key)
            {
                return mid_idx;
            }
            else if(arr[mid_idx]>key)
            {
                end_idx=mid_idx - 1;
            }
            else
            {
                strt_idx=mid_idx + 1;
            }
        }

        return -1;
    }
};

int main ()
{
    int arr[5]={20,10,49,67,78};
    ArraySearchAlgorithm Obj;
    cout << Obj.BinarySearch(arr,5,49);

}