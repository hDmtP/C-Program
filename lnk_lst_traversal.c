#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){

    while (ptr != NULL)
    {   for (int i = 1; i > 0; i++)
    {
        printf("Element %d= %d\n", i, ptr->data);
        ptr=ptr->next;
        
    }
    
    
        
    }
    
}


int main(){
    
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 89;
    first->next = second;

    second->data = 121;
    second->next = third;

    third->data = 466;
    third->next = fourth;

    fourth->data = 645;
    fourth->next = NULL;

    linkedListTraversal(first);

    return 0;
}