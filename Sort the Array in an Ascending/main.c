#include"stdio.h"

void sort(int *, int);



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
  }


void sort(int *ptr, int size)
  {
      int i,j,temp;
   
      for(i = 0;i < size; i++)
        {
            for(j=i+1;j<size;j++)
              {
                  if(*(ptr+j)<*(ptr+i))
                    {
                        temp = *(ptr +i);
                        *(ptr +i) =*(ptr +j);
                        *(ptr + j) = temp;
                    }
              }
        }
      for(i = 0;i<size;i ++)
        {
            printf("%d ",*(ptr+i));
        }
  }

      

  
