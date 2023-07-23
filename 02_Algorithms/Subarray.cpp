#include <iostream>
#include <stdio.h>
#include <climits>
#include <math.h>

using namespace std;
void sum_of_subarray(int arr[], int size);
void LargestArithmeticArray(int arr[],int size);
void GlobalMaximaOnIncomingData(int arr[],int size);
void FirstRepeatElementSmallestIndex(int arr[],int );
void FindSubarrayofGivenSum(int arr[],int ,int );


int main()
{
    // int arr[20]={1,5,3,4,3,5,6,5,6,7,1};
    // int arr_len=11;
    // sum_of_subarray(arr,arr_len);
    // LargestArithmeticArray(arr,arr_len);
    // GlobalMaximaOnIncomingData(arr,arr_len);
    // FirstRepeatElementSmallestIndex(arr,arr_len);

    int arr[5]={1,0,3,7,5};
    int arr_len=5;
    int i=1,j;
    char str[20]="Amaresh Mandal";
    static int a[20];
    float in=3;

    // a[in]=in++;
    cout << in << endl;
    in=in++;
    in=1.7678996655;
    cout << in + in + in << endl;
    cout << 3*in <<endl;
    cout << "IN=" <<(in++ + in++) << endl;

    // cout << (i>10 ? "%-50s" : "%-30s",str);
    // cout << "I am Here %-30s",str;
   
    FindSubarrayofGivenSum(arr,5,5);
}

void sum_of_subarray(int arr[],int arr_len)
{
    // this function is used for displaying sum of all the possible subarrays from a given array
    int sum=0;

    for(int i=0;i<=arr_len;i++)
    {
        sum=0;
        for( int j=i;j<=arr_len-1;j++)
        {
            sum=sum + arr[j];
            cout << sum <<endl;
        }
    }
}

void LargestArithmeticArray(int arr[],int arr_len)
{
    int curr_diff=0;
    int prev_diff=0;
    int curr_subarr_len=2;
    int curr_subarr_start=0,curr_subarr_end=0;
    int largest_subarr_len=0;
    int largest_subarr_start=0;
    int largest_subarr_end=0;

    curr_diff=arr[0] - arr[1];
    prev_diff=curr_diff;
    curr_subarr_len=largest_subarr_len;

    for (int i=1;i<arr_len;i++)
    {
        curr_diff=arr[i-1] - arr[i];
        
        if(curr_diff == prev_diff  && i>1)
        {
            
            curr_subarr_len += 1;
            if(arr_len-1==i)
            {
                
                curr_subarr_end= i;
                if(curr_subarr_len >= largest_subarr_len)
                {
                    largest_subarr_end=curr_subarr_end;
                    largest_subarr_start=curr_subarr_start;
                    largest_subarr_len=curr_subarr_len;
                }
            
                
            }



        }
        else
        {
            
            curr_subarr_end= curr_subarr_start+curr_subarr_len-1;
            
            if(curr_subarr_len >= largest_subarr_len)
            {
                largest_subarr_end=curr_subarr_end;
                largest_subarr_start=curr_subarr_start;
                largest_subarr_len=curr_subarr_len;
            }
            curr_subarr_len=2; 
            curr_subarr_start=i-1;  
              
        }
        prev_diff = curr_diff;        
    }

    cout << "Largest subarry=" << largest_subarr_start << ','<< largest_subarr_end << endl;
    cout << "Largest subarray Length= " << largest_subarr_len << endl;

}

void GlobalMaximaOnIncomingData(int arr[], int arr_len)
{ // This function is used to find out the number of maxima exist as we tranverse an array or incoming data

    int max_val=INT_MIN, max_occurnece=0;

    // for (int i=0; i<arr_len  ; i++)
    // {
    //     max_val=max(arr[i],max_val);
    //     if(arr[i]>= max_val)
    //     {
    //         if(arr[i] > arr[i+1] && i < arr_len)
    //         {
    //             max_occurnece += 1;
    //             cout << arr[i] << ',';
    //         }
    //         else if (i==arr_len-1)
    //         {
    //             max_occurnece += 1;
    //             cout << arr[i];
    //         }
    //         else
    //         {

    //         }
    //     }
    // }
    // cout << "Max Number=" << max_occurnece ;
    int ans=0,mx=-1;
    for (int i=0;i<arr_len;i++)
    {   
       
        
        if(arr[i] > mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        
        mx=max(arr[i],mx);
    }
    cout << ans << endl;
}

void FirstRepeatElementSmallestIndex(int arr[],int arr_len)
{
    // This function is use to find the first repeating element in the array of integers,
    // i.e an element that ocurrs more than once and whose index of its first ocuurence is smallest.
   /*  O(N^2 Sol)*/
   /*
    uint8_t ele_found_flag=0;
    for (int i=0;i<arr_len;i++)
    {
        for (int j=i+1 ;j<arr_len;j++)
        {
            if(arr[i] == arr[j])
            {
                cout << i +1 ;
                ele_found_flag=1;
                break;
            }
        }
        if(ele_found_flag == 1)
        {
            break;
        }

    }
    if(ele_found_flag==0)
    {
        cout<<'No repaeting Element' << endl;
    }
    */
    // The problem with above approach is that its time complexity is O(N^2)
    // Another approach would be to maintain another array say Mark_Arr_Ele whose length is equal 
    // to the max integer number possible. The function of this array would be to keep track of 
    // which numbers are found in given array Arr, and update the value at this index of Mark_Arr_Ele arrar 
    // to the index where element found in given Array Arr. i.e Mark_Arr_Ele[A[i]] = i; 
    // The index of Mark_Arr_Ele represents the number in array Arr. 
    // Initialy intialize all the elements of Mark_Arr_Ele by -1 and when updating this element
    // check if the Mark_Arr_Ele[A[i]] has value other than -1, that represent this element is 
    // repeating. Take the current value of Mark_Arr_Ele and check with Min_Idx Value.
    // If its less than Min_Idx value than update the Min_Idx value with the current value.
    // After all element of array Arr is traversed then the repeating elements min index would be
    // in the variable Min_Idx.

    // O(N) Solution
     int Min_Idx=INT_MAX;    // var to hold the smallest repeating index
     int Mark_Arr_Ele[10000]={};    // A Large Array to mark the esiting element in an array; Check the max value of integers in array tp decide the length of this array
     // Assign all the elements of Mark Arr Ele by -1
     for (int i=0;i<10000;i++)
     {
        Mark_Arr_Ele[i]=-1;
     }
     for (int i=0;i<arr_len;i++)
     {
        if(Mark_Arr_Ele[arr[i]]!=-1)
        {
            Min_Idx=min(Min_Idx,Mark_Arr_Ele[arr[i]]);
        }
        else
        {
            Mark_Arr_Ele[arr[i]]=i;
        }
     }

    if(Min_Idx==INT_MAX)
    {
        cout << "-1" << endl;

    }
    else
    {
        cout <<"Smallest Index Srarts from 0:"<< Min_Idx <<endl;
    }

}

void FindSubarrayofGivenSum(int arr[],int arr_len, int Sum_Value)
{
    /* This function is for displaying start and end index of subarray whose sum of the 
    elements becomes the given Sum*/
    // This is a general logic of O(N^2). See the next section for optimized code.

    // int St=0,En=0;
    // int sum_lcl;
    // for (int i=0; i< arr_len; i++)
    // {
    //     sum_lcl = 0;
    //     St=En=i;
    //     while((sum_lcl < Sum_Value) && (En < arr_len))
    //     {
    //         sum_lcl += arr[En];
    //         En++;
    //         cout << En<<',';
    //     }
    //     if(sum_lcl==Sum_Value)
    //     {
    //         cout << "Start:" << St << endl;
    //         cout << "End:" << En-1 << endl;
    //     }
    // }


    // This section of code has complexity O(N)

    int St=0,En=0;
    int sum_lcl=arr[0];
    while (En < arr_len && St < arr_len )
    {
        cout << "Main" << endl;
        if(sum_lcl == Sum_Value)
        {
            if(En==0)
            {
                cout << "Start IDX: " << St<< endl;
                cout << "End IDX: " << En << endl;
                break; 
            }
            sum_lcl += arr[En];
            cout << "equal:" << sum_lcl << endl;
        }

        while(sum_lcl < Sum_Value && En < arr_len)
        {
            En++;
            sum_lcl += arr[En];
            cout<<"Less" << sum_lcl << endl;
            
            if(sum_lcl == Sum_Value)
            {
                cout << "Start IDX:" << St<< endl;
                cout << "End IDX:" << En << endl;
                break;         
                               
            }                      
        }  

        while(sum_lcl > Sum_Value && St < arr_len && En<arr_len)
        {
            sum_lcl -= arr[St];
            St++;
            cout<<"More" << sum_lcl << endl;
            if(sum_lcl == Sum_Value)
            {
                cout << "Start IDX:" << St << endl;
                cout << "End IDX:" << En << endl;
                break;                 
            }
        }
    En++;
    cout << "En at the end :" << En << endl;
    cout << "St at the end :" << St << endl;
    }   
}