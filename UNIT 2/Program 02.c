#include<stdio.h>
#include<conio.h>

#define max 5

int stack[max];
int top = -1;

void pop()
{
    if(top == -1)
    {
        printf("\nStack is Empty(Underflow)");
    }
    else
    {
        printf("\nDeleted Element = %d", stack[top]);
        top--;
    }
}

void main()
{
    stack[0] = 10;
    stack[1] = 20;
    stack[2] = 30;
    top = 2;

    pop();
    pop();
    pop();
    pop();

    getch();
}
