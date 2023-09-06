#include <stdio.h>
#include <iostream>
#include "dos.h"
using namespace std;

void fun(int **);
int test(int a, int b);
int main()
{

    /* Basic Pointers arithematic: 
    1. prt ++ or ptr=ptr+1 : increment of 1 here depends of type of pointer.
        if int, mem increases by 4 byte and if char mem increases by 1 byte.
    2.  code*/
    // int a=5,b=7;
    // int * ptr=&a;
    // int const *ptr_val_const=&a;  // Pointer pointing to value is constant
    // int * const ptr_const=&a;     // Pointer adress is constant
    // int const * const ptr_const_val_const=&a;

    // *ptr_val_const=5;    
    // ptr_val_const= &b;
    // ptr_const= &b;
    // *ptr_const=10;

    // ptr_const_val_const = &b;
    // *ptr_const_val_const=100;

    // cout << ptr << endl;
    // cout << *ptr << endl;


    /* Pointer Array 
    1. Define 1D array. Access using pointer and index : 1D array can be defined in 
       ordinary way since here increment required is only by an int. So int *arr will work.
    2. Define 2D array and access using pointer and index */

    char arr=1;
    
    char *ptr_arr=&arr;

    cout << "Pointer to the Array:" << ptr_arr << endl;
    cout << "Value of array:" << *ptr_arr << endl;
    int arr1d[3]={1,2,3};
    int arr2d[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int (*arr2d_ptr[4]) (int ,int ); 
    int (*arr_1ptr)[4];
    int arr3d[2][3][1]={{{1},{1},{1}},{{2},{2},{2}}};
    int (*ptr_2d)[3][1]=arr3d;
    int a=0;
    // int c=-1, c+10;
    int i,j;
    for (i=0,j=0;i<5,i<3;i++)
    {
        cout << i << endl;
        cout << j << endl;

    }
    cout << "sizeof="<< ptr_2d[0]  << endl;
    cout << "sizeof="<< ptr_2d[1]  << endl;
    cout << "sizeof= + 1"<< (ptr_2d) + 1 << endl;
    cout << "Address Hold by Pointer:" << sizeof(ptr_2d) << endl;
    cout << "Value Hold by Pointer:" << ***ptr_2d << endl;
    cout << arr2d[0][1] <<endl;
    cout << "arr1d="<< *(arr1d+10) << endl;
    cout << "Exceed Array:"<< arr1d[300] << endl;
    
    cout<< "Finished" <<endl;
    cout << arr2d << endl;
    // cout << ++arr2d_ptr << endl;
    cout << arr2d[0] << endl;
    cout << arr2d[0] + 1<< endl;
    cout << arr2d + 1 <<endl;
    cout << *(arr2d+1) << endl;
    cout << *(arr2d)+1 << endl;
    cout << **(arr2d + 1) <<endl;
    cout << **(arr2d) + 1 <<endl;
    // cout << *(arr2d[0] + 1)<< endl;
    cout << *((arr2d + 0) + 1)<< endl;
    // cout << *(arr2d + 1) << endl;
    // cout << (arr2d_ptr)<<endl;
    // cout << (arr2d_ptr + 1 )<<endl;
    // cout << (arr2d_ptr[0]++ )<<endl;

    int *j1;
    fun(&j1);
    cout << "In Main" << endl;
    cout << j1 << endl;
    // arr2d_ptr[0]=test;
    cout << 1["AmareshMandal"] << endl;
    int a_t=1,*ptr1;
    char ch='c';
    void *ptr2;
    ptr1 = &a_t;
    ptr2 = ptr1;
    ptr2 = &ch;
    ptr2 = ptr1;

    char a1[]="Visual C++";
    char *temp_ptr=a1;
    char **b=&temp_ptr;

    cout << "Char Ptr" << endl;
    cout << sizeof(a1) << " " << sizeof(b)<<endl;
    cout << sizeof(*a1) << " " << sizeof(*b)<<endl;
    *(*(b)+1) = 'j';
    cout << *(*(b)+1) << endl;
    // ptr1 = &ch;
    
}
int test(int a, int b)
{
    cout<< "In Test" << endl;
    return 1;
}
void fun(int **k)
{
    int a=10;
    cout << "In Func" << endl;
    cout << &a << endl;
    
    *k=&a;
}


// double factorial(double fct_no)
// {
//   double sum = 1;
//   for(i=1;i<=fct_no;i++)
//   {
//     sum = sum*i;
//   }
//   return sum;
// }

// int main()
// {
//   double (fptr*)(double);
//   fptr = &factorial(fct_no);
//   double fct_value = *fptr;
//   return 0;
// }


// //5*4*3*2*1