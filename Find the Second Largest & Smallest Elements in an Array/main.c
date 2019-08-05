#include"stdio.h"

void sort(int *,int);
void remove_duplicate(int *,int * ,int,int);
int count_dup(int *,int );
void main()
{
    int size,i,j,count=0,size2=0;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,size); // sorting tha array using selection sort algorithm
    count = count_dup(arr,size); // counting the duplicate values
    size2 = size-count;
    int remove[size2]; // intializig a seperate array for storing the unique values
    remove_duplicate(arr,remove,size,size2); // removing the duplicate values and storing in the new array
    printf("The second largest number is %d and second smallest number is %d",remove[1],remove[size2-2]);




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

void remove_duplicate(int arr1[],int rem[] ,int size1, int size2)
{
    int i,j;
    rem[0]=arr1[0];
    for(i=1,j=0;i<size1,j<size2;i++)
    {
        if (rem[j]!=arr1[i]) // if same numbers are continous the skip otherwise copy
        {
            rem[++j] = arr1[i];
        }
    }
}

int count_dup(int arr2[],int size)
{
    int i,count=0;
    for (i=0;i<size-1;i++)
    {
        if(arr2[i]==arr2[i+1]) // increment count if adjacent elements are same
            count++;
    }
    return count;
}

