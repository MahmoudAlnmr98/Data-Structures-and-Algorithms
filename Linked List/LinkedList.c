#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


Node* Head = NULL;


/**********************************************************
*function to insert a number at the beginning of the list
************************************************************/
void Push(int num)
{
    /*create a node*/
    Node* node = (Node*)malloc(sizeof(Node));
    /*assign data to the node*/
    node->data = num;
    /*case 1:
    if the list is empty, then head node points to null
    we want the node to point to null, then we assign null
    of the head to the node so node and head are both point to null,
    then we give the head address of the node
    case 2:
    if the list is not empty, then head has an address,we want the new
    node to point to the node we already had, this address is already stored
    in head, so we assign the address inside head to node, so they both point
    to the same location, then we make head point to the node we created
    */
    node->next = Head;
    Head = node;

}

/**********************************************************
*function to traverse and print a list
************************************************************/
void PrintList()
{
    Node* traverser = Head;

    while(traverser != NULL)
    {
        printf("%d ",traverser->data);
        traverser = traverser->next;
    }

}

/**********************************************************
*function to insert a number anywhere in the list
************************************************************/
void Insert(int num, int position)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = num;
    node->next = NULL;

    Node* traverser = Head;

    if(position == 1)
    {
        node->next = Head;
        Head = node;
    }
    else
    {
        while(position != 2)
        {
            traverser = traverser->next;
            -- position  ;
        }
        node->next = traverser->next;
        traverser->next = node;

    }



}

void Append(int num)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = num;
    node->next = NULL;

    Node* traverser = Head;

    if(Head == NULL)
    {
        Head = node;
    }
    else
    {
        while(traverser->next != NULL)
        {
            traverser = traverser->next;
        }

        traverser->next = node;

    }

}

void DeleteNode(int position)
{
    Node* temp1 = Head;

    if(position == 1)
    {
        Head = temp1->next;
        free(temp1);
    }
    else
    {
        for (int i = 0 ;i < position -2; ++i)
        {
            temp1 = temp1->next;
        }

        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }

}

void pop()
{
    Node* temp = Head;
    Node* temp2 = Head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    while(temp2->next != temp)
    {
        temp2 = temp2->next;
        if(temp2->next == temp)
        {
            temp2->next = NULL;
            break;
        }
    }
    free(temp);

}

void ReverseList()
{
    Node* current = Head;
    Node* previous = NULL;
    Node* temp = Head;

    while(current != NULL)
    {
        current = current->next;
        temp->next = previous;
        previous = temp;
        if(current == NULL)
        {
            Head = temp;
        }
        temp = current;
    }
    free(temp);
    free(current);
}


void PrintRecursively(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        printf("%d ",head->data);
        PrintRecursively(head->next);
    }

}
void PrintReverseRecursively(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        PrintReverseRecursively(head->next);
        printf("%d ",head->data);

    }

}

void ReverseListRecursively(Node* node)
{
    if(node->next ==  NULL)
    {
        Head = node;
        return;
    }
    else
    {
        ReverseListRecursively(node->next);
        Node* next = node->next;
        next->next = node;
        node->next = NULL;
    }
}




