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

struct Node *deleteFirst(struct Node *head){
struct Node *ptr = head;
head = head->next;
free(ptr);
return head;

}



struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptrx = head;
    struct Node *ptry = ptrx->next;
    
    for (int i=0; i<index-1; i++)
    {
        ptrx=ptrx->next;
        ptry=ptry->next; 
       
    }
    ptrx->next=ptry->next;
    free(ptry);

    return head;
    
};

struct Node *deleteAttheEnd(struct Node *head){
struct Node *ptrx = head;
struct Node *ptry = head->next;

while (ptry->next!=NULL)
{
    ptrx=ptrx->next;
    ptry=ptry->next;
}
ptrx->next=NULL;
free(ptry);
return head;
}

struct Node *deleteAfteraNode(struct Node *head, int value){
    struct Node *ptrx = head;
    struct Node *ptry = ptrx->next;
    
    while(ptry->data!=value && ptry->next!=NULL)
    {
        ptrx=ptrx->next;
        ptry=ptry->next; 
       
    }
    ptrx->next=ptry->next;
    free(ptry);

    return head;

}

struct Node *deleteAfteraNode2(struct Node *head, struct Node *preNode){
    struct Node *ptrx = head;
    struct Node *ptry = ptrx->next;
    
    while(ptry!=preNode)
    {
        ptrx=ptrx->next;
        ptry=ptry->next; 
       
    }
    ptrx->next=ptry->next;
    free(ptry);

    return head;

}






int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 89;
    head->next = second;

    second->data = 121;
    second->next = third;

    third->data = 466;
    third->next = fourth;

    fourth->data = 645;
    fourth->next = NULL;

    // head = deleteFirst(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteAttheEnd(head);
    fourth = deleteAfteraNode2(head, second);
    linkedListTraversal(head);

    return 0;
}