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
        //  triangle with numbered pattern
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

    void printinvertednumberedpattern(int n)
    {
        //  print first row. assing row as n because we want a inverted traingle
        for (int row=n;  row != 0; row--)
        {
            for (int col=0; col != row ; col ++)
            {
                cout << col + 1;
            }
            cout << endl;
        }
    }

    void print_binary_pattern(int n)
    {
        int cnt =1;   // dummy variable to print 1 and 0;
        for (int row=0;row != n; row++)
        {   cnt = row %2;  // assign starting binary number based on no. of zeros and 1
            for (int col=0;col <= row; col++)
            {
                cout << (cnt%2);
                cnt++;
            }
            cout << endl;
        }

    }
    //    ***
    //   ***
    //  ***
    void print_rhombus_Patter(int n)
    {
        for (int row=0;row<n;row++)
        {
            for (int spc=n-row;spc !=0;spc --)
            {
                cout << " ";
            }
            for (int col=0;col<n;col++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    //   1
    //  1  2
    //1  2  3
    void print_numbered_pattern(int n)
    {
        for (int row=1;row <= n;row++)
        {
            for (int spc=0;spc <= n-row;spc++)
            {
                cout << " ";
            }
            for (int col=1;col<=row;col++)
            {
                cout << col << " ";
            }
            cout << endl;
        }
    }
//  print pallindromic pattern
//    1
//   212
//  32123
    void pallindromic_pattern(int n)
    {
        for (int row=1;row<=n;row++)
        {
            for (int spc=1;spc <= n-row;spc++)
            {
                cout << " ";
            }

            for (int col=row; col >=1;col--)
            {
                cout << col;
            }
            for (int col = 2; col <=row ;col++)
            {
                cout << col;
            }
            cout << endl;
        }
    }

    // Star Pattern
    //   *
    //  ***
    // *****

    void print_strpattern(int n)
    {
        for (int row=0;row<n;row++)
        {   
            for(int spc=0;spc<n-row;spc++)
            {
                cout << " ";
            }
            for (int col=0;col<2*row+1;col++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int row=n-1;row>=0;row--)
        {   
            for(int spc=0;spc<n-row;spc++)
            {
                cout << " ";
            }
            for (int col=0;col<2*row+1;col++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    // Zig Zag Pattern
    //  *     *
    // *  *  *  *
    //*    *     *
    // No of row always fixed at 3. Row and Col starts with 1 always.
    // stars are present when sum of row and col are 4
    // only for rows two, if col no. is divisible by 4 then we will print stars
    void print_zigzag_pattern(int n)
    {
        for (int row=1;row<4;row++)
        {
        for (int col=1;col<=n;col++)
        {
            if((row+col) %4 ==0)
            {
                cout<<"*";
            }
            else if(row==2 && col %4==0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
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
    // obj.print_butterfly_pattern(4);
    // obj.printinvertednumberedpattern(4);
    // obj.print_binary_pattern(5);
   // obj.print_rhombus_Patter(5);
//    obj.print_numbered_pattern(5);
    //   obj.pallindromic_pattern(5);
    //  obj.print_strpattern(5);
      obj.print_zigzag_pattern(20);


    
}

