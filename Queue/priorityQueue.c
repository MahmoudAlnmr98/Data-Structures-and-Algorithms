#include<stdio.h>

#define Q_MAX_SIZE  10

typedef struct 
{
    int elements[Q_MAX_SIZE];
    int priority[Q_MAX_SIZE];
    int index;
    int maxPr;
}PQ;

int isEmpty(PQ *myPQ)
{
    return (myPQ->index == 0);
}

int isFull(PQ *myPQ)
{
    return (myPQ->index == Q_MAX_SIZE);
}

void EnQueue(PQ *myPQ, int element, int priority)
{
    if(!isFull(myPQ))
    {
        myPQ->elements[myPQ->index] = element;
        myPQ->priority[myPQ->index] = priority;
        myPQ->index++;
        if(myPQ->priority[myPQ->index] < myPQ->priority[myPQ->index -1])
        {
            myPQ->maxPr = myPQ->priority[myPQ->index -1];
        }
    }
}

void DeQueue(PQ *myPQ)
{

}
