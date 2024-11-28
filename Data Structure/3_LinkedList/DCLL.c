#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;
void add_first(int data);
void forward_display();
void backward_Display();


int main()
{
    add_first(10);
    add_first(30);
    add_first(15);
    forward_display();
    backward_Display();
    //head->15->30->10
    //Tail->10->30->15
    return 0;
}

struct node* create_node()
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL)
        printf("Malloc Failed !");
    else
    {
        new_node->data = 0;
        new_node->prev = NULL;
        new_node->next = NULL;
    }
    return new_node;
}

void add_first(int data)
{
    struct node *new_node = create_node();
    new_node->data = data;

    if(head == NULL)
    {
        head = new_node;
        new_node->next = head; // circular
        new_node->prev = head; // circular
    }
    else
    {
        new_node->next = head;
        new_node->prev = head->prev;
        head->prev->next = new_node;
        head->prev = new_node;
        head = new_node;
    }
}

void forward_display()
{
    if(head == NULL)
        printf("List is Empty !\n");
    else
    {
        struct node *trav = head;

        printf("Head");
        do{
            printf("->%d",trav->data);
            trav = trav->next;
        }while(trav != head);
    }
    printf("\n");
}

void backward_Display()
{
    if(head == NULL)
        printf("List is empty !");
    else
    {
        struct node *trav = head->prev;

        printf("Tail");
        do{
            printf("->%d",trav->data);
            trav = trav->prev;
        }while(trav != head->prev);
    }
    printf("\n");
}