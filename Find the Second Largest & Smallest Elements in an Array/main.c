#include"stdio.h"

void sort(int *,int);

void main()
{
    int size,i,j,k;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,size);
    printf("sorted\n");
    for(i=0;i<size;i++)
        printf("%d",arr[i]);

   for(i =0;i<size-1;i++)
    {
        for(k = i+1;k<size;k++)
        {

        if(arr[i]==arr[i+1])
        {
            for(j=i+1;j<size-1;j++)
                arr[j]=arr[j+1];

        }
        }
    }
    printf("The second largest number is:%d\nThe second smallest number is:%d",arr[1],arr[size-1]);

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


