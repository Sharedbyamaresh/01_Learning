#include <stdio.h>
#include <iostream>
using namespace std;
#include "Queue.h"


main()
{
    Queue* me = Create_Queue();
    cout << me -> GetQueueSize(me)<<endl;
    cout << me->IsEmpty(me) << endl;
    cout << me->IsFull(me) << endl;
    me->InsertItem(me,11);
    cout << me -> GetQueueSize(me)<<endl;
    cout << me->IsEmpty(me) << endl;
    cout << me->IsFull(me) << endl;
    me->InsertItem(me,12);
    cout << me -> GetQueueSize(me)<<endl;
    
    cout << me->IsEmpty(me) << endl;
    cout << me->IsFull(me) << endl;
    cout << me-> RemoveItem(me)<<endl;
    cout << me -> GetQueueSize(me)<<endl;
    cout << me->IsEmpty(me) << endl;
    cout << me->IsFull(me) << endl;
    cout << me-> RemoveItem(me)<<endl;
    cout << me -> GetQueueSize(me)<<endl;
    cout << me->IsEmpty(me) << endl;
    cout << me->IsFull(me) << endl;

    Queue_Delete(me);
    me-> GetQueueSize(me);
    cout << "After Queue Deleted:" << endl;
    cout << me->GetQueueSize(me) << endl;
    

}