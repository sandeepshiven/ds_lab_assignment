#include"stdio.h"

int element_index(int *,int ,int );



void main()
{
    int i,size,index,ele;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search\n");
    scanf("%d",&ele);
    index = element_index(arr,size,ele);
    printf("%d is at index %d",ele,index);
}


int element_index(int arr[],int size,int ele)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(ele == arr[i])
            return i;
    }
    return -1;
}
