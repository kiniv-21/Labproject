#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
typedef struct node Node;
typedef struct list List;

struct student{
int id;
char name[100];
float marks;
};
List * makelist();
void insertNode(int data, List *list);
void deleteNode(int data, List *list);
void display();
void maximum(int data, List *list);

#endif // LINKEDLIST_H_INCLUDED
