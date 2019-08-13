#include"stdio.h"

void put_even(int *,int *,int ,int );
void put_odd(int *,int *,int ,int );


void main()
{
    int i, size,even_count=0,odd_count=0;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
            even_count++;
        else
            odd_count++;
    }
    int even_arr[even_count],odd_arr[odd_count];
    put_even(arr,even_arr,size,even_count);
    put_odd(arr,odd_arr,size,odd_count);
    printf("Array of even numbers\n");
    for(i=0;i<even_count;i++)
        printf("%d ",even_arr[i]);
    printf("\nArray of odd numbers\n");
    for(i=0;i<odd_count;i++)
        printf("%d ",odd_arr[i]);
}

void put_even(int arr[],int even[],int size,int count)
{
    int i,j;
    for(i=0,j=0;i<size,j<count;i++)
    {
        if(arr[i]%2==0)
        {
            even[j++] = arr[i];
        }
    }

}

void put_odd(int arr[],int odd[],int size,int count)
{
    int i,j;
    for(i=0,j=0;i<size,j<count;i++)
    {
        if(arr[i]%2!=0)
        {
            odd[j++] = arr[i];
        }
    }

}
