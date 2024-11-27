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
int count_nodes();
void add_at_pos(int data,int pos);

int main()
{
    add_first(10);
    // head->10
    add_first(20);
    // head->20->10
    add_first(30);
    //head->30->20->10
    add_first(40);
    //display();
    // head->40->30->20->10
    add_last(50);
    // head->40->30->20->10->50
    add_last(80);
    // head->40->30->20->10->50->80
    add_first(60);
    // head->60->40->30->20->10->50->80
    display();
    add_at_pos(35,5); // invalid
    // head->60->40->30->20->35->10->50->80
    display();
    return 0;
}

struct node* create_node()
{
   struct node *ptr =(struct node*)malloc(sizeof(struct node));
   ptr->data = 0;
   ptr->next = NULL;

   return ptr; // returning address of a node

}

void add_first(int data) // 10
{
    // 1. create a node
     struct node *ptr = create_node();
     ptr->data = data;
     // 2. Attach it to the linked list at the first position
     // a. if the list is empty
     if(head == NULL)
     {
        head = ptr;
     }
     else // b. if the list contains multiple nodes
     {
        // 1. create a link between the new node and first node.
        ptr->next = head;
        // 2. update the head pointer.
        head = ptr;
     }
}

void display()
{
    if(head == NULL)
        printf("List is Empty !\n");
    else
    {
        // take a trav pointer starting from first node
        struct node *trav = head;
        // print the data part and traverse to the next node till 
        // trav does not contain NULL

        printf("Head");
        while(trav != NULL)
        {
            printf("->%d",trav->data);
            trav = trav->next;
        }
    //Head->10->20->30
    }
    printf("\n");
}

void add_last(int data)
{
    // create a node
   struct node *ptr = create_node();
   ptr->data = data;
   // attach
    if(head == NULL)
        head = ptr;
    else
    {
        // start the trav pointer
        struct node *trav = head;
        // traverse and stop at the last node
        while(trav->next != NULL)
        {
            trav = trav->next;
        }
        // attach the new node to the last node
        trav->next = ptr;
    }

}

void add_at_pos(int data,int pos)
{
    if(head == NULL)
    {
        if(pos == 1)
            add_first(data);
        else
            printf("List is Empty !\n");
    }
    else if(pos == 1)
        add_first(data);
    else if(pos == count_nodes()+1)
        add_last(data);
    else if(pos < 1 || pos > count_nodes() + 1)
        printf("\n Invalid !\n");
    else
    {
        // create a node
        struct node *ptr = create_node();
        ptr->data = data;
        // traverse till pos -1 node
        struct node *trav = head;
        for(int i =1; i<pos-1; i++)
        {
            trav = trav->next;
        }
        // link the new node with the position node(3rd node)
        ptr->next = trav->next;
        // update the position-1 node to point to the new node
        trav->next = ptr;
    }
}

int count_nodes()
{
    int count = 0;
    if(head == NULL)
        printf("List is empty !\n");
    else
    {
        struct node *trav = head;
        while(trav != NULL)
        {
            count++;
            trav = trav->next;
        }
    }
    return count;
}