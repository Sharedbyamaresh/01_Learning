#include <stdio.h>
#include <iostream>
using namespace std;
#define SWAP(x,y,c)  c t;int i; t=a,a=b,b=t;for(i=7;i<10;i++){cout<<"in Swap"<<endl;};
#define Test(x,y) (x=5, y=10);
#define print(int) cout << #int <<endl;


// int test(int c)
// {
//     cout << "In Function" << endl;
//     cout << c << endl;
//     return 1;
// }


int main()
{
    double a=0;
    double b=2;
    

    // Test Macros: In Macros, we can use type specifiers as well. It works because we simply replace the macro by its defination.
    
    // SWAP(a,b,int);
    cout << a << endl;;;
    (cout << b << endl);
    
    // Test(a,b);
    print(5);
   
    cout << a << endl;
    cout << b << endl;
    // Test Structures : 
    // test(1);
    struct A
    {
                       
        // char i;      
        // double l;
        // char j;
        // float f[2];        
        // int a[2];
        // char ch1[12];        
        // int c;
        // int a:1;
        // int b:1;
        // int c:1;
        
        char e;
        char c;
        int a;
        int d;
        // char c[5];
                
        // char ch[4];       

    };

    struct A AA;
    cout<<sizeof(AA)<<endl;
    

    
    return 1;
}

