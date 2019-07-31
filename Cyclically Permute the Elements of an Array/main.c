#include"stdio.h"

void main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[size] = arr[0];
    for(i =0;i < size; i ++)
    {
        arr[i] = arr[i +1];
    }

    printf ("Cyclical permuted array is\n");
    for(i= 0; i < size;i++)
    {
         printf("%d ",arr[i]);
    {
}
