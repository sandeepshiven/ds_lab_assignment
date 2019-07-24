#include"stdio.h"

void main()
{
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size],sum=0,i;
    float average =0;
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=size-1;i++)
    {
        sum += arr[i];
    }

    average = (float)(sum/size);

    printf("The sum of array is : %d\nThe average of array is: %f",sum,average);

}
