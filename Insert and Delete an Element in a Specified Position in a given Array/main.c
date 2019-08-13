#include"stdio.h"

void deletion(int *,int *,int ,int );
void insert(int *,int *,int ,int );


void main()
{
    int i, size,choice;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int i_size,d_size;
    i_size = size +1;
    d_size = size - 1;
    int arr[size],ins[i_size],del[d_size];
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Do you want to insert or delete?\n1.insert\n2.delete\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : insert(arr,ins,size,i_size);break;
        case 2 : deletion(arr,del,size,d_size);break;
        default: printf("Invalid selection\n");
    }

}


void deletion(int arr[],int del[],int size,int size2)
{
    int index,i,j;
    printf("Enter the index you want to delete\n");
    scanf("%d",&index);
    for(i= 0,j=0;i<size,j<size2;i++)
    {
        if(i != index)
        {
            del[j++] = arr[i];
        }
    }
    for(i=0;i<size2;i++)
        printf("%d ",del[i]);
}

void insert(int arr[],int ins[],int size,int size1)
{
    int index,num,i,j;
    printf("Enter the number you want to insert\n");
    scanf("%d",&num);
    printf("Enter the index where you want to insert the number\n");
    scanf("%d",&index);
    for(i=0,j=0;i<size,j<size1;i++)
    {
        if(i != index)
        {
            ins[j++] = arr[i];
        }
        else
        {
            ins[j++] = num;
            ins[j++]= arr[i];
        }

    }
    for(i=0;i<size1;i++)
        printf("%d ",ins[i]);
}

