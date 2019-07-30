
#include"stdio.h"


void find_pair(int * ,int,int* );
void main()
{
    int i,j,size,pair[2];
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        scanf("%d",&arr[i]);
    }
    find_pair(arr,size,pair);

    printf("The largest numbers are %d",arr[pair[0]],arr[pair[1]]);
}




void find_pair(int arr[],int size,int pair[])
{
    int i,j,num1,num2,sum1,sum2,index[2];
    sum2 = arr[0]+arr[2];
    num1 = 0;
    num2 = 1;
    for(i=0;i<size;i++)
    {
        for(j = i+1;j<size-1;j++)
        {
            sum1 = arr[i] + arr[j+1];
            if(sum1>sum2)
            {
                num1 = i;
                num2 = j;
                sum2 = sum1;
            }
        }
    }
    pair[0] = num1;
    pair[1] = num2+1;
}
