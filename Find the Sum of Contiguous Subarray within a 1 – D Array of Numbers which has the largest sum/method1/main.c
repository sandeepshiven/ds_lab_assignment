#include"stdio.h"
int second_largest(int * ,int );
int largest(int *,int );
void main()
{
    int i,j,sum=0,size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        scanf("%d",&arr[i]);
    }
    printf("second largest %d",second_largest(arr,size));
    /*
    if(largest(arr,size)< second_largest(arr,size))
    {

    for(i = largest(arr,size);i<=second_largest(arr,size);i++)
    {
        sum +=arr[i];
    }
    printf("The subarray is from %d to %d and sum of elements between these numbers is: %d",arr[largest(arr,size)],arr[second_largest(arr,size)],sum);
    }
    else
    {
        for(i = second_largest(arr,size);i<=largest(arr,size);i++)
    {
        sum +=arr[i];
    }
    printf("The subarray is from %d to %d and sum of elements between these numbers is: %d",arr[second_largest(arr,size)],arr[largest(arr,size)],sum);

    }
    */
}


int largest(int arr[],int size)
{
    int i, temp,k=0;
    temp = arr[0];
    for(i=0; i<size;i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
            k =i;
        }
    }
    return k;

}

int second_largest(int arr[],int size)
{
    int i,temp1,k=0,j=0,l,max;
    temp1 = arr[0];
    max = largest(arr,size);
    for (i = 0;i<size;i++)
    {
        if(temp1 == arr[max])
        {
            temp1 = arr[i-2];
           // continue;
        }
        if(temp1 < arr[i])
        {

            k=i;
            temp1 = arr[i];
        }
        printf("temp1 = %d, k = %d,i = %d\n",temp1,k,i);
    }
    return k;

}
