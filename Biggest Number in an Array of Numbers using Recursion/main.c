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
    index = biggest(arr,1,size,0,num);// 1 is showing the the next index of the the array for comparing the value in num and 0 is index of
    printf("The biggest number is %d",arr[index]);  // initial element of in num
}


int biggest(int arr[],int lower,int size,int index,int num)
{
    if(lower<size)  // if lower index is less than size of the array
    {
        if (num<arr[lower])   // storing the next big number in num after comparison
        {
            index = lower;
            num = arr[lower];
            return biggest(arr,lower+1,size,index,num); // recursive call (increased the lower value for next comparison)
        }
        else
        {
            return biggest(arr,lower+1,size,index,num); // the num is already bigger so no need of storing (increased lower for next comparison
        }

    }
    else
    {
        return index; // the index of biggest number after comparing every element of the array
    }
}
