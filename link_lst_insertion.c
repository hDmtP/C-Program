#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){

    while (ptr!=NULL)
    {
        for (int i = 1; i > 0; i++)
        {
            printf("Element %d = %d\n", i, ptr->data);
            ptr = ptr->next;

        }
        
    }
    

}

struct Node *insertionAttheHead(struct Node *head, int data){

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertionAtEnd(struct Node *head, int data){

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *ptrx=head;
    while (ptrx->next!=NULL)
    {
        ptrx=ptrx->next;
    }
    ptrx->next=ptr;
    ptr->next=NULL;
    return head;


}

struct Node *insertionAfterNode(struct Node *prevNode, int data){

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    
    
    return ptr;


}

struct Node *insertionAtIndex(struct Node* head, int data, int index){

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptrx = head;
    int j = 0;
    ptr->data=data;
    while (j!=index-1)
    {
        ptrx=ptrx->next;
        j++;
    }
    ptr->next=ptrx->next;
    ptrx->next=ptr;

    return head;
}



int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 78;
    head->next = second;

    second->data = 52;
    second->next = third;

    third->data = 96;
    third->next = fourth;

    fourth->data = 147;
    fourth->next = NULL;

    // head = insertionAtIndex(head,148,4);
    // head = insertionAttheHead(head, 89);
    // head = insertionAtEnd(head, 963);
    fourth = insertionAfterNode(third, 645);
    linkedListTraversal(head);

    
    return 0;
}