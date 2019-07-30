#include"stdio.h"



void main()
{
    int i, size,choice;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Do you want to insert or delete?\n1.insert\n2.delete\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : insert(arr,size);break;
        case 2 : deletion(arr,size);break;
        default: printf("Invalid selection\n");
    }
}
