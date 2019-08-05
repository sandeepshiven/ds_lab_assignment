
#include"stdio.h"


void find_pair(int * ,int,int* );
void main()
{
    int i,j,size,pair[2]; // pair[] for storing the index of the largest two number
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        scanf("%d",&arr[i]);
    }
    find_pair(arr,size,pair); // finding pair using the concept that sum of largest two elements will also be the largest

    printf("The largest numbers are %d",arr[pair[0]],arr[pair[1]]);
}




void find_pair(int arr[],int size,int pair[])
{
    int i,j,num1,num2,sum1,sum2,index[2];
    sum2 = arr[0]+arr[2]; // storing initially a sum of the two elements for comparing
    num1 = 0;
    num2 = 1;
    for(i=0;i<size;i++)// two loops for
    {
        for(j = i+1;j<size-1;j++)
        {
            sum1 = arr[i] + arr[j+1];
            if(sum1>sum2)  //swapping and storing the index
            {
                num1 = i;
                num2 = j;
                sum2 = sum1;
            }
        }
    }
    pair[0] = num1;  // now storing the final indexes of the largest two numbers
    pair[1] = num2+1; // don't touch this
}
