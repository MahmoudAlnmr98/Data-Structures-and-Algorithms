#include<stdio.h>

#define STACK_MAX_SIZE 100
typedef struct
{
    int elements[STACK_MAX_SIZE];
    int index;
}stack;

int isEmpty(stack *mystack)
{
    if(mystack->index == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *mystack)
{
    if(mystack->index == STACK_MAX_SIZE -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void pushStack(stack *mystack, int element)
{
    if(!isFull(mystack))
    {
        mystack->index++;
        mystack->elements[mystack->index] = element;
    }
}

void popStack(stack *mystack)
{
    if(!isEmpty(mystack))
    {
        mystack->elements[mystack->index] = 0;
        mystack->index--;
    }

}

int peekStack(stack *mystack)
{
    if(!isEmpty(mystack))
    {
        return mystack->elements[mystack->index];
    }
    else
    {
        printf("empty");
        return -1;
    }
}

void printStack(stack *myStack)
{
    int stackSize;
    if(!isEmpty(myStack))
    {
        for(stackSize = myStack->index; stackSize >= 0 ; stackSize--)
        {
            printf("the %d elemnt is %d \n",stackSize, myStack->elements[stackSize]);
        }
    }
    else
    {
        printf("empty stack\n");
    }

}

void initStack(stack *mystack)
{
    mystack->index = -1;
}

int main(void)
{
    stack mystack;
    initStack(&mystack);
    pushStack(&mystack,5);
    pushStack(&mystack,6);
    pushStack(&mystack,7);
    pushStack(&mystack,8);
    pushStack(&mystack,9);
    printStack(&mystack);
    printf("stack top element is %d \n",peekStack(&mystack));
    popStack(&mystack);
    popStack(&mystack);
    popStack(&mystack);
    printStack(&mystack);
    printf("stack top element is %d \n",peekStack(&mystack));
    popStack(&mystack);
    popStack(&mystack);
    popStack(&mystack);
    printStack(&mystack);
    printf("stack top element is %d \n",peekStack(&mystack));
}