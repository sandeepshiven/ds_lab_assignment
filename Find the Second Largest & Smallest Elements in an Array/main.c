#include"stdio.h"

void sort(int *,int);
void remove_duplicate(int *,int * ,int,int);
int count_dup(int *,int );
void main()
{
    int size,i,j,count=0;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,size);
    count = count_dup(arr,size);
    int remove[size-count];
    remove_duplicate(arr,remove,size,count);
    printf("count : %d Sorted\n",count);
    for(i=0;i<size-count;i++)
        printf("%d",remove[i]);



}

void sort(int *ptr,int size)
{
    int i,temp,j;

    for(i = 0;i<size;i++)
    {
        for(j = i+1;j<size;j++)
        {
            if (*(ptr+j) > *(ptr + i))
            {
                temp = *(ptr+i);
                *(ptr + i) = *(ptr +j);
                *(ptr +j) = temp;

            }
        }
    }
}

void remove_duplicate(int arr1[],int rem[] ,int size1, int count1)
{
    int i,j;
    rem[0]=arr1[0];
    for(i=0;i<size1-count1;i++)
    {
        for(j=i+1;j<size1;j++)
        {
            if(rem[i]==arr1[j])
            {

            }
            else
            {
                rem[i] = arr1
            }
        }

    }
}

int count_dup(int arr2[],int size)
{
    int i,count=0;
    for (i=0;i<size-1;i++)
    {
        if(arr2[i]==arr2[i+1])
            count++;
    }
    return count;
}

