
#include <stdio.h>

#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct AA newAA;

struct AA
{
    int var;
    int (*FuncName) (AA * const me);
};

int Func(newAA * const me)
{
    cout << "inside Func" << endl;
    cout << "before changing " << me->var << endl;
    me -> var = 10;
    
    cout << "after changing " << me->var << endl;
    return 1;

}
int Func2(newAA * const me)
{
    cout << "inside Func" << endl;
    cout << "before changing " << me->var << endl;
    me -> var = 20;
    
    cout << "after changing " << me->var << endl;
    return 1;

}

int main()
{
    newAA * a;
    a=(newAA *)malloc(sizeof(newAA));
    a-> var = 5;
    a-> FuncName = Func2;
    a-> FuncName(a);

    cout << sizeof(a) << endl;
    


}