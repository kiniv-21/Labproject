#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
void StudentRecord::insertNode(double ids, string nm, string ads, float pavg)
{
    NodeInfo *newNode;
    NodeInfo *nodePtr;
    NodeInfo *previousNode = NULL;

    newNode = new NodeInfo;
    newNode->id = ids;
    newNode->name = nm;
    newNode->address = ads;
    newNode->gpa = pavg;

    if(!head)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else
    {
        nodePtr = head;
        previousNode = NULL;

        while(nodePtr != NULL && nodePtr->id < ids)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if(previousNode == NULL)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }

    }

}
