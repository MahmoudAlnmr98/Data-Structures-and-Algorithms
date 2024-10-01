#include<stdio.h>

#define QUEUE_MAX_SIZE 5

typedef struct 
{
    int elements[QUEUE_MAX_SIZE];
    int rearIndex;
    int frontIndex;
}Queue;

void InitQueue(Queue *myQueue)
{
    myQueue->frontIndex = 0;
    myQueue->rearIndex = 0;
}

int isEmpty(Queue *myQueue)
{
    return (myQueue->frontIndex == myQueue->rearIndex);
}

int isFull(Queue *myQueue)
{
    return ((myQueue->frontIndex - myQueue->rearIndex) == QUEUE_MAX_SIZE);
}

void enQueue(Queue *myQueue, int data)
{
    if(!isFull(myQueue))
    {
        myQueue->elements[myQueue->frontIndex] = data;
        myQueue->frontIndex++;
    }
    else
    {
        printf("Q is full \n");
    }
}

void deQueue(Queue *myQueue)
{
    if(!isEmpty(myQueue))
    {
        myQueue->elements[myQueue->rearIndex] = 0;
        myQueue->rearIndex++;
        if(myQueue->frontIndex == myQueue->rearIndex)
        {
            myQueue->frontIndex = 0;
            myQueue->rearIndex = 0;
            printf("Q is empty \n");
        }
    }
    else
    {
        printf("Q is empty \n");
    }
}

void printQueue(Queue *myQueue)
{
    if(!isEmpty(myQueue))
    {
        for(int i = myQueue->rearIndex; i < myQueue->frontIndex; i++)
        {
            printf("Q %d element is %d\n",i,myQueue->elements[i]);
        }
    }
}


int main()
{
    Queue myQueue;
    InitQueue(&myQueue);
    enQueue(&myQueue,1);
    enQueue(&myQueue,2);
    enQueue(&myQueue,3);
    enQueue(&myQueue,4);
    enQueue(&myQueue,5);
    enQueue(&myQueue,1);
    enQueue(&myQueue,1);
    printQueue(&myQueue);
    deQueue(&myQueue);
    deQueue(&myQueue);
    deQueue(&myQueue);
    deQueue(&myQueue);
    deQueue(&myQueue);
    deQueue(&myQueue);
    deQueue(&myQueue);
    printQueue(&myQueue);
    enQueue(&myQueue,1);
    enQueue(&myQueue,2);
    enQueue(&myQueue,3);
    enQueue(&myQueue,4);
    enQueue(&myQueue,5);
    enQueue(&myQueue,1);
    enQueue(&myQueue,1);
    printQueue(&myQueue);

    return 0;
}