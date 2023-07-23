
// This program along woith File1,FIle2 and staticvar.h all three together demonstrate that the static
// variables or idenfier are limited to only one translation unit and these are handled by linker.
// static is an internal linkage for a variable or identifier.
#include <iostream>
#include "staticvar.h"
using namespace std;

int main()
{
    TestFunc();
    counter= counter + 5;
    cout << "From FIle 1 :" << endl;
    cout << "Value of counter="<< counter<<endl;
    cout << "Address of counter =" << & counter<< endl;
    TestFunc();

}