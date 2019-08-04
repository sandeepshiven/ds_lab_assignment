#include"stdio.h"
int front=-1;
int rear=-1;

int insert(int *,int ,int );
int deletion(int *,int );


void main ()
{
    int size,i;
    printf("Enter the size of the queue\n");
    scanf("%d",&size);
    int choice,item,arr[size];
    while(1)
    {
        printf("\nWhat do you want to do?\n1.Insertion\n2.Deletion\n3.End\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("Enter the item you want to insert\n");
                scanf("%d",&item);
                insert(arr,size,item);
                for (i=0;i<size;i++){printf("%d ",arr[i]);}
                break;
            }

        case 2:
            {
                item = deletion(arr,size);
                printf("Deleted item is %d\n",item);
                for (i=0;i<size;i++){printf("%d ",arr[i]);}
                break;
            }
        case 3:
            break;

        default : printf("Invalid Choice\n");
        }
    }
}



int insert(int arr[],int size,int item)
{
    if((front == 0 && rear == size-1) || (front == rear +1) )
    {
        printf("Queue Overflow\n");
        return -1;

    }
    if (front == -1)
    {
        front = 0;rear = 0;
    }
    else if (rear == size-1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }

    arr[rear] = item;

}

int deletion(int arr[],int size)
{
    int item;
    if(front == -1)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    item = arr[front];
    if (front == rear)
    {
        front = -1;rear = -1;
    }
    else if (front  == size -1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    return item;
}
