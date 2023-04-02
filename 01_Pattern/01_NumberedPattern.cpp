#include <stdlib.h>
#include <stdio.h>  
#include "iostream"

using namespace std;

class pattern
{
    public:
    int number_row=5;
    int number_col=5;

    //  print numbered half pyramid
    void print_numbered_half_pyramid()
    {
        for (int i = 0; i<number_row; i++)
        {
            
            for (int j=0; j<=i;j++)
            {
                cout << i+1;
            }

            cout << endl;

        }
    }

    // Print numbered pyramid inverted
    void print_numbered_half_pyramid_inverted()
    {
        for (int i = 0; i<number_row; i++)
        {
            for (int k=number_row - i; k!= 0; k--)
            {
                cout << " ";
            }
            for (int j=0; j<=i;j++)
            {
                cout << i+1;
            }

            cout << endl;

        }
    }

    void print_floyd_traingle()
    {
        int cnt=1;
        for (int i = 0; i<number_row; i++)
        {
            
            for (int j=0; j<=i;j++)
            {
                cout << cnt++ << ' ';
            }

            cout << endl;

        }
    }
    void print_butterfly_pattern(int n)
    {
        //  Print the first half of butterfly i.e. two inverted pyramid
        for (int i =0; i< n ; i++)
        {

            for (int j=i;j!=0;j--)
            {
                cout << "*";
            }
            
            for (int k=2*(n - i); k != 0;k--)
            {
                cout << " ";
            }
            for (int j=i;j!=0;j--)
            {
                cout << "*";
            }

            cout << endl;

        }
        //  Print flipped over two 180 deg inverted pyramid just by changing the first loops iterators
        for (int i =n; i!=0 ; i--)
        {

            for (int j=i;j!=0;j--)
            {
                cout << "*";
            }
            
            for (int k=2*(n - i); k != 0;k--)
            {
                cout << " ";
            }
            for (int j=i;j!=0;j--)
            {
                cout << "*";
            }

            cout << endl;

        }
   
    }

};


int main()
{
    pattern obj;
    obj.number_row=5;
    obj.number_col=5;

    // obj.print_numbered_half_pyramid();
    // obj.print_numbered_half_pyramid_inverted();
    // obj.print_floyd_traingle();
    obj.print_butterfly_pattern(4);


    
}

