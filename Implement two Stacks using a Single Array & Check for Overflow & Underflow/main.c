#include"stdio.h"

int top_index_a=-1;
int top_index_b;
int pop(int *,int ,int );
void stack_a(int *,int );
void stack_b(int *,int );
int push(int *,int ,int );
int pop(int *,int ,int );








void main()
{
    int max,choice_of_stack;
    printf("Enter the size of the array in which stack A and B are being stored\n");
    scanf("%d",&max);
    int arr[max];
    top_index_b = max;
    while(1)
    {

    printf("On which stack you want to perform operations?\n1.Stack A\n2.Stack B\n");
    scanf("%d",&choice_of_stack);
    switch(choice_of_stack)
    {
        case 1: stack_a(arr,max);break;
        case 2: stack_b(arr,max);break;
        default:printf("Invalid selection\n");

    }
    }

}



void stack_a(int arr[],int max)
{
    int choice_operation = 0,item,stack = 1;
    while(choice_operation != 3)
    {
        printf("What operation do you want to perform on stack A?\n1.insertion\n2.deletion\n3.end\n");
        scanf("%d",&choice_operation);
        switch(choice_operation)
        {
            case 1:
                {

                    item = push(arr,max,stack);
                    printf("The top item of stack A is %d\n",item);
                    break;
                }

            case 2:
                {
                    item = pop(arr,max,stack);
                    printf("The popped item of stack A is %d\n",item);
                    break;
                }

            case 3:
                {
                    break;
                }

            default : printf("Invalid selection\n");
        }
    }



}


void stack_b(int arr[],int max)
{
    int choice_operation = 0,item,stack = 2;
    while(choice_operation != 3)
    {
        printf("What operation do you want to perform on stack B?\n1.insertion\n2.deletion\n3.end\n");
        scanf("%d",&choice_operation);
        switch(choice_operation)
        {
            case 1:
                {

                    item = push(arr,max,stack);
                    printf("The top item of stack B is %d\n",item);
                    break;
                }

            case 2:
                {
                    item = pop(arr,max,stack);
                    printf("The popped item of stack B is %d\n",item);
                    break;
                }

            case 3:
                {
                    break;
                }

            default : printf("Invalid selection\n");
        }
    }



}



int push(int arr[],int max,int stack)
{
    int item;
    if (stack == 1)
    {
        if(top_index_a + (max-top_index_b)>=max-1)
        {
            printf("Stack Overflow\n");
            return -1;
        }
        else
        {
            printf("Enter the item you want to insert\n");
            scanf("%d",&item);
            top_index_a++;
            arr[top_index_a] = item;
            return item;
        }
    }
    else
    {
        if(top_index_a + (max-top_index_b)>=max-1)
        {
            printf("Stack Overflow\n");
            return -1;
        }
        else
        {
            printf("Enter the item you want to insert\n");
            scanf("%d",&item);
            top_index_b--;
            arr[top_index_b] = item;
            return item;
        }
    }
}


int pop(int arr[],int max,int stack)
{
    int item;
    if (stack == 1)
    {
        if (top_index_a < 0)
        {
            printf("\n Stack Underflow\n");
            return -1;
        }

        else
        {
            item = arr[top_index_a];
            top_index_a--;
            return item;
        }

    }

    else
    {
        if (top_index_b >= max)
        {
            printf("\n Stack Underflow\n");
            return -1;
        }

        else
        {
            item = arr[top_index_b];
            top_index_b++;
            return item;
        }

    }
}







