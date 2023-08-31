#include "linear_queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node *buildNode(int value)
{
    //allocating memory
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("\nERROR IN THE MEMORY ALLOCATION");
        return NULL;
    }

    //assigning a value to variable "value" and "next"
    newNode -> value = value;
    newNode -> next = NULL;
    return newNode;
}

void enqueuee(Queuee *queuee, int value)
{
    Node *newNode = buildNode(value);

    if(queuee -> tail == NULL)
    {
        queuee -> head = newNode;
        queuee -> tail = newNode;
    } else
    {
        queuee -> tail -> next = newNode;
        queuee -> tail = newNode;
    }
}
