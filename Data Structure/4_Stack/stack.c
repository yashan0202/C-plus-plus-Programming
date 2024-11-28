#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack
{
    int arr[SIZE];
    int top;
};

void init_top(struct stack *ps);
void push(int data,struct stack *ps);
void pop(struct stack *ps);
int peek(struct stack *ps);
int stack_full(struct stack *ps);
int stack_empty(struct stack *ps);
int main()
{
    struct stack s1;
    init_top(&s1); // -1
    int choice;
do{
    printf("0.Exit\n1.Push\n2.Pop\n3.Peek :\n");
    printf("Enter your Choice !");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:
                exit(0);
        case 1: // Push
                if(stack_full(&s1)) // if(1)
                {
                    printf("Stack is Full !\n");
                }
                else
                {
                    int data;
                    printf("enter the data :");
                    scanf("%d",&data);
                    push(data,&s1);
                    printf("Data Pushed = %d\n",data);
                }
                break;
        case 2: // Pop
                if(stack_empty(&s1))
                {
                    printf("Stack Empty !\n");
                }
                else
                {
                    int temp = peek(&s1);
                    pop(&s1);
                    printf("Data Popped = %d!\n",temp);
                }
                break;
        case 3: // Peek
                if(stack_empty(&s1))
                {
                    printf("Stack Empty ! peek not possible !\n");
                }
                else
                {
                    int temp = peek(&s1);
                    printf("Topmost Element= %d\n",temp);
                }
                break;
        default :
                    printf("Invalid Option !\n");
        
    }
}while(choice != 0);
    return 0;
}

void init_top(struct stack *ps)
{
    ps->top = -1;
}

void push(int data,struct stack *ps)
{
    // increment the top
    ps->top++;
    // insert the data at the top position
    ps->arr[ps->top] = data;
}

void pop(struct stack *ps)
{
    // optional
    ps->arr[ps->top] = 0;

    ps->top--;
}

int peek(struct stack *ps)
{
    return ps->arr[ps->top];
}

int stack_full(struct stack *ps)
{
    if(ps->top == SIZE -1)
        return 1;
    else
        return 0;
}

int stack_empty(struct stack *ps)
{
    if(ps->top == -1)
    {
        return 1;
    }
    else
        return 0;
}