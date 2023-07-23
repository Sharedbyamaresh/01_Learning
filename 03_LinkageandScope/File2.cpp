#include <iostream>
#include "staticvar.h"
using namespace std;

void TestFunc()
{
    extern int counter;
    cout << "From FIle 2 :" << endl;
    cout << "Value of counter="<< counter<<endl;
    cout << "Address of counter =" << & counter<<endl;
    counter++;
}

