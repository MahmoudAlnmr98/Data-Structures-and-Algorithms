#ifndef LINKED_LIST_H
#define LINKED_LIST_H


typedef struct Node Node;

struct Node
{
    int data;
    Node* next;
};



void PrintList();

void Push(int num);
void Insert(int num, int position);
void Append(int num);

void DeleteNode(int position);
void pop();

void ReverseList();

void PrintRecursively(Node* head);
void PrintReverseRecursively(Node* head);
void ReverseListRecursively(Node* node);



#endif // LINKED_LIST_H

