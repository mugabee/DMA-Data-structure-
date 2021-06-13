#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node *current=NULL;
// Creating a linked List in C
//Use a function called create to create a list

void create()
{
    struct node *newnode, *current;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        current=newnode;
    }
    else
    {
        current->next=newnode;
        current=newnode;
    }
}

//Function to insert a new element
//Insert at the begining
void insertFirst()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        current=newnode;
    }
    else
    {
        current->next=head;
        head=newnode;
    }
}

//Inserting at last
void insertAtLast()
{
    struct node *newnode, *current;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        current=newnode;
    }
    else
    {
        current->next=newnode;
        current=newnode;
    }
}

// Inserting in the middle
void mid_insert()
{
    struct node *newnode, *temp, *temp2;
    int position=3;
    newnode = (struct node*)malloc(sizeof(struct  node));
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        current = newnode;
    }
    else
    {
        temp=head;
        int i;
        for(i=1; i<position; i++)  temp = temp->next;
        temp2 = temp->next;
        temp->next = newnode;
    }
    newnode->next=temp2;
}
int main(){
    printf("Welcome to Linked List implementation in C");
    printf("\n============================================\n");
    printf("Please choose from the below choices:\n");
    //Complete the Main please
    return 0;
}
