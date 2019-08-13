#include"stdio.h"

void sort(int *,int);

void main()
{
    int size,i;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,size); // sorting using selection sort
    printf("The largest number is:%d\nThe smallest number is:%d",arr[0],arr[size-1]);

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
