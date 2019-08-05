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
    sort(arr,size); // sorting array using bubble sort algorithm
    printf("\nEnter the value you want to search\n");
    scanf("%d",&element);
    index = binary_search(arr,element,0,size-1); // index of the element
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

int binary_search(int arr[],int element,int lower,int upper) // lower and upper are extremities and changes with every function call
{
    int mid,i,index;

    mid = (lower+upper+1)/2;  // calculating the middle of the array with each function call
    if(upper >= lower)
    {

        if( arr[mid]== element) // if the element is found then return its index
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            return binary_search(arr,element,lower,mid-1); // if the mid element is bigger than search element then search to left of array
        }
        else if (arr[mid] < element)
        {
            return binary_search(arr,element,mid+1,upper);  // if the mid element is smaller than search element then search to right of array
        }
    }
    return -1;  // if search element is not in array



}

