#include"stdio.h"
void print(int *,int );
void split(int *,int );


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
    split(arr,size);
    print(arr,size);
}


void split(int *ptr,int size)
{
    int i,j,index;
    printf("Enter the index from where you want to split the array\n");
    scanf("%d",&index);
    int arr[index+1];
    for(i=0;i<=index;i++)
    {
        arr[i] = *(ptr +i);
    }
    for(i=0,j=index+1;i<size-(index+1),j<size;i++,j++)
    {
        *(ptr +i) = *(ptr+j);
    }
    for(i=size-(index+1),j=0;i<size,j<=index;i++,j++)
    {
        *(ptr+i) = arr[j];
    }

}


void print(int *str,int size)
{
    int i;
    printf("New array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(str+i));
    }
}
