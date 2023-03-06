#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int data;
    struct node *next;
};

void traverseList(struct node *head) {
    struct node *current = head;

    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct node* insertatstart(struct node *head,int data){
    struct node * ptr =(struct node *)malloc(sizeof(struct node *));                                 
    ptr->data=data;                                                                                  

    ptr->next=head;                                                                                  
    return ptr;                                                                                      
}

struct node* insertatend(struct node * head,int data){
struct node * ptr =(struct node *)malloc(sizeof(struct node *));                                 
    ptr->data=data;
    struct node * p = head;                                                                        

    while(p->next!=NULL){                                                                          
        p=p->next;                                                                                 
    }

    p->next=ptr;                                                                                   
    ptr->next=NULL;                                                                                
    return head;    
}

int main() {
    struct node *head = NULL;

    head = (struct node *) malloc(sizeof(struct node));
    head->data = 1;

    struct node *second = (struct node *) malloc(sizeof(struct node));
    second->data = 2;

    struct node *third = (struct node *) malloc(sizeof(struct node));
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("Before Insertion\n");
    traverseList(head);

    head=insertatstart(head, 4);
    head=insertatend(head, 5);

    printf("After Insertion\n");
    traverseList(head);
    getch();
    return 0;
}
