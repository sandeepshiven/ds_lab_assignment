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
    if((front == 0 && rear == size-1) || (front == rear +1) ) // if the queue is full then two conditions arises 1. full as array
    {                                                         // 2. in the somewhere between the first and last index where front of the
        printf("Queue Overflow\n");                           // queue and rear of the queue are adjacent to each other
        return -1;

    }
    if (front == -1)          // initializing front and rear values if no items is inserted at the beginning
    {
        front = 0;rear = 0;
    }
    else if (rear == size-1)      // if rear has reached the last index of array then
    {                             // reassign it to 0 index for insertion
        rear = 0;
    }
    else
    {
        rear++;          // increment of of rear for the insertion of the next item in the array
    }

    arr[rear] = item;     // insertion

}

int deletion(int arr[],int size)
{
    int item;
    if(front == -1)          // if array is empty
    {
        printf("Queue Underflow\n");
        return -1;
    }

    item = arr[front];  // storing the item in front to a variable
    if (front == rear)     // only one item remaining in queue
    {
        front = -1;rear = -1;
    }
    else if (front  == size -1)   // if the front of the queue has reached the end of array
    {                            // the reassign front to 0 index
        front = 0;
    }
    else
    {
        front++; // incrementing front for storing element in item for next value
    }
    return item;
}
