#ifndef STATICVAR_H
#define STATICVAR_H
static int counter=7;              // if we remove static from here then we will get linker error saying "multiple defination of counter". 
                            // Its to be noted that the error comes during linkage not compilation, so the variables scope or linkage handled by linker
void TestFunc(void);




#endif