#include"stdio.h"

void print(int *,int );
void sort(int *,int );
int binary_search(int *,int ,int,int );


void main()
{
    int size,i,element,index;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,size);
    printf("\nEnter the value you want to search\n");
    scanf("%d",&element);
    index = binary_search(arr,element,0,size-1);
    printf("The element %d is at index %d",element,index);
}

void print(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",*(p +i));
    }
}


void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if (*(ptr +j)>*(ptr + j+1))
            {
                temp = *(ptr +j);
                *(ptr +j) = *(ptr +j +1);
                *(ptr +j+1) = temp;
            }
        }
    }
    printf("Sorted array is \n");
    print(ptr,size);
}

int binary_search(int arr[],int element,int lower,int upper)
{
    int mid,i,index;

    mid = (lower+upper+1)/2;
    if(upper >= lower)
    {

        if( arr[mid]== element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            return binary_search(arr,element,lower,mid-1);
        }
        else if (arr[mid] < element)
        {
            return binary_search(arr,element,mid+1,upper);
        }
    }
    return -1;



}

