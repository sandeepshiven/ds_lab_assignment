#include"stdio.h"

int top_index_a=-1;
int top_index_b;


void main()
{
    int max,choice_of_stack;
    printf("Enter the size of the array in which stack A and B are being stored\n");
    scanf("%d",&max);
    int arr[max];
    top_index_b = max-1;
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



void stack_a(int arr[],max)
{
    int choice_operation = 0,item,stack = 0;
    while(choice_operation != 3)
    {
        printf("What operation do you want to perform on stack A?\n1.insertion\n2.deletion\n3.end");
        scanf("%d",&choice_operation);
        switch(choice_operation)
        {
            case 1:
                {

                    item = push(arr,max,top_index_a,stack);
                    printf("The top item of stack A is %d\n",item);
                    break;
                }

            case 2:
                {
                    item = pop(arr,max,top_index_a,stack);
                    printf("The top item of stack A is %d\n",item);
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


void stack_b(int arr[],max)
{
    int choice_operation = 0,item,stack = 1;
    while(choice_operation != 3)
    {
        printf("What operation do you want to perform on stack B?\n1.insertion\n2.deletion\n3.end");
        scanf("%d",&choice_operation);
        switch(choice_operation)
        {
            case 1:
                {

                    item = push(arr,max,top_index_b,stack);
                    printf("The top item of stack B is %d\n",item);
                    break;
                }

            case 2:
                {
                    item = pop(arr,max,top_index_b,stack);
                    printf("The top item of stack B is %d\n",item);
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



int push(int arr,int max,int index,int stack)
{
    int item;
    if (stack)
    {
        if(top_index_a + top_index_b>max)
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
        if(top_index_a + top_index_b=>max)
        {
            printf("Stack Overflow\n");
            return -1;
        }
        else
        {
            printf("Enter the item you want to insert\n");
            scanf("%d",&item);
            top_index_;
            arr[top_index_a] = item;
            return item;
        }
    }
}
