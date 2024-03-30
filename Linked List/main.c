#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

extern Node* Head;

int main()
{
   // int n,x;
    //scanf("%d",&n);
    /*for(int i =0; i < n ;i++)
    {
        scanf("%d",&x);
        InsertAtHead(x);
    }*/
    Push(10);
    Push(10);

    Insert(1,1);
    Insert(7,2);
    Insert(3,3);
    Insert(4,1);

    Append(20);
    Append(15);

    DeleteNode(3);
    DeleteNode(1);

    PrintList();

    ReverseList();
    printf("\n");

    PrintList();

    printf("\n");
   // pop();
   // pop();
    PrintList();
    printf("\n");

    PrintRecursively(Head);
    printf("\n");
    //PrintReverseRecursively(Head);
    ReverseListRecursively(Head);
    printf("\n");
    PrintList();


    return 0;
}
