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

struct node * deletionatvalue(struct node *head,int value){
  struct node * p=head;
  struct node * q=head->next;
  if(head->data == value) {         //if value at first node
        struct node *temp = head;
        head = head->next;
        free(temp);

        return head;
    }
    else{
    while(q->data!=value && q->next!=NULL){                                                         
    p=p->next;
    q=q->next;
    }
    if(q->data==value){                                                                              
    p->next=q->next;                                                                                 
    free(q);
    }
    return head;
    }
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

    printf("Before deletion\n");
    traverseList(head);
    head=deletionatvalue(head, 2);
    printf("After deletion\n");
    traverseList(head);
    getch();
    return 0;
}
