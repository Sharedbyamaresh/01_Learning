#include "Queue.h"
#include <iostream>
#include <stdio.h>
using namespace std;


int IsFullFunction(Queue * const me)
{
    return (((me-> head + 1) % MAX_Q_Buffer_Size) == me-> tail);
}

int IsEmptyFunction (Queue * const  me)
{
    return (me->tail == me->head);
}

void InsertItemFunction(Queue * const me, int data)
{
    if(! IsFullFunction( me))
    {
        me->Buffer[me-> head]= data;
        me-> size +=1;
        ++me-> head;
        
    }
    else
    {
        cout << "Buffer Full" << endl;
    }
}

int RemoveItemFunction(Queue * const me)
{
    int temp=0;
    if( !IsEmptyFunction(me))
    {
        temp = me-> Buffer[me->tail];
        ++ me->tail;
        me-> size -=1;
        return temp;
        
    }
    else
    {
        cout << "From Remove Item : QueueEmpty" << endl;
        return -99999;
    }
}

int GetQueueSizeFunction(Queue * const me)
{
    return me->size;
}

void Queue_Init(Queue * const me, int (*isfullptr)(Queue * const me),int (*isemptyptr)(Queue * const me),int (*removeitemptr)(Queue *const  me), void (*insertitempptr)(Queue * const me,int),int (*getsizeptr)(Queue * const me))
{
    me->head=0;
    me->tail=0;
    me->size=0;

    me->IsFull = isfullptr;
    me->IsEmpty = isemptyptr;
    me->RemoveItem = removeitemptr;
    me->InsertItem = insertitempptr;
    me->GetQueueSize = getsizeptr;

}

Queue * Create_Queue()
{
    Queue * me= (Queue *)malloc(sizeof(Queue));
    if(me == NULL)
    {
        cout << "Queue Not Created" << endl;
        return NULL;
    }

    Queue_Init(me, IsFullFunction, IsEmptyFunction, RemoveItemFunction,InsertItemFunction,GetQueueSizeFunction);

    return me;
}

void Queue_Delete ( Queue *const  me)
{
    free(me);
    cout << "IN Queue Delete Func:" << endl;
    cout << me << endl;
}