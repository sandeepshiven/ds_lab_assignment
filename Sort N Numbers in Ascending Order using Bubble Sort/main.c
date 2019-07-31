#include"stdio.h"

void sort(int *, int);
void print(int *, int);


void main()
  {
      int i,size;
      printf("Enter the size of array\n");
      scanf("%d",&size);
      printf("Enter the elements of the array\n");
      int arr[size];
      for(i =0;i<size;i++)
      {
           scanf("%d",&arr[i]);
       }
      sort(arr,size);
      print(arr,size);
  }


void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void print(int *ptr,int size)
{
    int i;
    printf("Sorted array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr + i));
    }
}
