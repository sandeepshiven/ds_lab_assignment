
#include"stdio.h"


void find_pair(int * ,int,int* );
void main()
{
    int i,j,sum=0,size,pair[2]; // pair[] for storing indexes of the two largest number
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        fflush(stdin);  // for clearing buffer
        scanf("%d",&arr[i]);
    }
    find_pair(arr,size,pair); // finding largest pair by taking sum of two largest elements will also be largest
    for(i = pair[0];i<=pair[1];i++)  // sum of elements between two largest numbers including them
    {
        sum += arr[i];
    }
    printf("The subarray is from %d to %d and sum of integers between these numbers is: %d",arr[pair[0]],arr[pair[1]],sum);
}




void find_pair(int arr[],int size,int pair[])
{
    int i,j,num1,num2,sum1,sum2;
    sum2 = arr[0]+arr[2];  // storing initially a sum of the two elements for comparing
    num1 = 0;
    num2 = 1;
    for(i=0;i<size;i++)  // two loops for scanning and comparing two index values
    {
        for(j = i+1;j<size-1;j++)
        {
            sum1 = arr[i] + arr[j+1];
            if(sum1>sum2)   //swapping and storing the index
            {
                num1 = i;
                num2 = j;
                sum2 = sum1;
            }
        }
    }
    pair[0] = num1;  // now storing the final indexes of the largest two numbers
    pair[1] = num2+1;  // don't touch this
}
