#include"stdio.h"
void merge(int *,int *,int *,int ,int );
void sort(int *ptr, int size);


void main()
{
    int i,size1,size2;
    printf("Enter the size of first array\n");
    scanf("%d",&size1);
    int first_array[size1];
    printf("Enter the elements of the first array\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&first_array[i]);
    }

    printf("Enter the size of second array\n");
    scanf("%d",&size2);
    int second_array[size2],merged[size1+size2];
    printf("Enter the elements of second array\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&second_array[i]);
    }
    merge(first_array,second_array,merged,size1,size2);
    sort(merged,(size1+size2));
    printf("The merged and sorted array is\n");
    for(i=0;i<(size1+size2);i++)
        printf("%d ",merged[i]);

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
  }

void merge(int first[],int second [],int merged[],int num1,int num2)
{
    int i,j;
    for(i = 0;i<num1;i++)
        merged[i] = first[i];
    for(i=num1,j=0;i<num2+num1,j<num2;i++,j++)
        merged[i] = second[j];

}
