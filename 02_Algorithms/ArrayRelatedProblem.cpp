#include "iostream"
#include<stdio.h>
#include<stdint.h>

#include<stdlib.h>

using namespace std;
class ArraySearchAlgorithm
{
    public:
    void PrintArray(int arr[],int arr_len)
    {
        for (int i=0;i<=arr_len -1 ; i++)
        {
            cout << arr[i] <<',' ;
        }
        cout << endl;
    }
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

    int * SelectionSort(int arr[],int len_arr)
    {
        int temp=0;
        for (int i=0;i<=len_arr-2;i++)
        {
            for (int j=i+1;j<=len_arr-1;j++)
            {
                if(arr[j] < arr[i])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return arr;
    }

    int * BubbleSort(int arr[],int arr_len)
    {
        int temp=0;
        int cnt=0;
        while(cnt < arr_len-1)       // we have to perform iteration only N-1 time in bubble sort
        {
            for (int i=0;i< arr_len-cnt;i++)     // arr_len-cnt as the kargest number in array keeps pushing towards the end of the array. so last element is sorted
            {
                if(arr[i]>arr[i+1])
                {
                    temp=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=temp;
                }
            }
            cnt++;
        }
        return arr;
    }

    int * InsertionSort(int arr[],int arr_len)
    {
        // int j=0;    // J is required even after the j forloop in order to place the element in right order
        int flag=0;
        for (int i=1;i <= arr_len-1;i++)
        {
            flag=0;
            int current_value=arr[i];           // this current value variable is required since the array gets updated with the new values in next loops
            for (int j=i-1; arr[j]> current_value && j>=0; j--)
            {
                arr[j+1]=arr[j];
                arr[j]=current_value;
                
            }
            // if(flag==1)
            // {
            //     arr[j]=current_value;

            // }
            
           
        }

        return arr;
    }

    int MaxTill_I(int arr[],int arr_len, int i_limit)
    {
        int max_i=INT_MIN;
        for (int i=0 ; i<=i_limit ; i++)
        {
            if(arr[i]>max_i)
            {
                max_i=arr[i];
            }
        }

        return max_i;
    }

};

int main ()
{
    // int arr[5]={20,10,67,78,1};
    int arr[5]={-5,-1,-3,2,1};
    // int arr[6]={12,45,23,51,19,8};
    int *ptr;
    ArraySearchAlgorithm Obj;
    cout << "from Main:" << endl;

    // cout << Obj.BinarySearch(arr,5,49);

    // ptr= Obj.SelectionSort(arr,5);  // Selection sort returns an array
    // ptr= Obj.BubbleSort(arr,5);  // Bubble sort returns an array
    // ptr= Obj.InsertionSort(arr,5);  // Bubble sort returns an array
    // for (int i=0;i<5;i++)
    // {
    //     cout << *ptr<<',';
    //     ptr++;
    // }

    cout<< Obj.MaxTill_I(arr,5,3);   // i th element starts from 0

}