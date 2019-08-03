#include"stdio.h"
int biggest(int *,int ,int ,int ,int );

void main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size],index =0,num,i;
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    num = arr[0];
    index = biggest(arr,1,size,0,num);//(0(1) = lower,0(2) = index)
    printf("The biggest number is %d",arr[index]);
}


int biggest(int arr[],int lower,int size,int index,int num)
{
    if(lower<size)
    {
        if (num<arr[lower])
        {
            index = lower;
            num = arr[lower];
            return biggest(arr,lower+1,size,index,num);
        }
        else
        {
            return biggest(arr,lower+1,size,index,num);
        }

    }
    else
    {
        return index;
    }
}
