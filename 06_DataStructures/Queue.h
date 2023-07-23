#ifndef QUEUE_H
#define QUEUE_H

#define MAX_Q_Buffer_Size 10
typedef struct Queue Queue;

struct Queue{

    int size;
    int head;
    int tail;
    int Buffer[MAX_Q_Buffer_Size];

    int (*IsFull) (Queue * const me);
    int (*IsEmpty) (Queue * const me);
    int (*RemoveItem) (Queue *const me);
    void (*InsertItem) (Queue * const me,int);
    int (*GetQueueSize) (Queue * const me);

};

int IsFullFunc(Queue * const me);
int IsEmptyFunc(Queue * const me);
int RemoveItemFunc(Queue * const me);
void InsertItemFunc(Queue * const me, int);
int GetQueueSizeFunc(Queue * const me);

Queue* Create_Queue (void);

void Queue_Init(Queue * const , int (*IsFull)(Queue * const me), int (*IsEmpty) (Queue * const me),int (*RemoveItem) (Queue *const me),void (*InsertItem) (Queue * const me,int),int (*GetQueueSize) (Queue * const me));
void Queue_Delete(Queue * const);

#endif