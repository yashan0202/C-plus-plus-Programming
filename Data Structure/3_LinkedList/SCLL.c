#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node* create_node();
void add_first(int data);
void display();
void add_last(int data);
void delete_first();
void delete_last();


int main()
{
    add_first(40);
    add_first(30);
    add_first(20);
    add_first(10);
    display();
    // head->10->20->30->40
    add_last(35);
    add_last(80);
    add_first(45);
    add_last(60);
    // head->45->10->20->30->40->35->80->60
    display();
    delete_first();
    display();
    // head->10->20->30->40->35->80->60
    delete_last();
    // head->10->20->30->40->35->80
    display();
    return 0;
}

struct node* create_node()
{
    struct node *new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data = 0;
    new_node->next = NULL;

    return new_node;
}

void add_first(int data)
{
    struct node *new_node = create_node();
    new_node->data = data;

    if(head == NULL)
    {
        head = new_node;
        new_node->next = new_node;
        // OR new_node->next = head;
    }
    else
    {
        struct node *trav = head;

        while(trav->next != head) // circular
        {
            trav = trav->next;
        }
        // link between new_node and first node
        new_node->next = head;
        
        // update the head pointer
        head = new_node;
        
        // update the next pointer of last node to
        // point to the new first node
        trav->next = head;
        // OR 
        // trav->next = new_node;
    }
}

void display()
{
    if(head == NULL)
        printf("Empty !\n");
    else
    {
        struct node *trav = head;
        printf("Head");
        do
        {
            printf("->%d",trav->data);
            trav = trav->next;
        }while(trav != head);
    }

    printf("\n");
}

void add_last(int data)
{
    struct node *new_node = create_node();
    new_node->data = data;

    if(head == NULL)
    {
        head = new_node;
        new_node->next = head; // circular
    }
    else
    {
        struct node *trav = head;

        while(trav->next != head)
        {
            trav = trav->next;
        }
        trav->next = new_node;
        new_node->next = head; // circular
    }
}

void delete_first()
{
    if(head == NULL)
        printf("Empty !\n");
    else if(head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *trav = head;
        while(trav->next != head)
        {
            trav = trav->next;
        }
        struct node *temp = head;

        head = temp->next;

        trav->next = head;

        free(temp);
        temp = NULL;
    }
}

void delete_last()
{
    if(head == NULL)
        printf("Empty !\n");
    else if(head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *trav = head;
        while(trav->next->next != head)
        {
            trav = trav->next;
        }
        free(trav->next);
        trav->next = head; // circular
    }
}