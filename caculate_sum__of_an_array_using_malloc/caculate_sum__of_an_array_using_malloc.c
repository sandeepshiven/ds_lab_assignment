#include"stdio.h"
#include"stdlib.h"

void main()
{
    int i,size1, size2,sum1=0,sum2=0;
    printf("Enter the size of first array\n");
    scanf("%d",&size1);
    int *ptr1,*ptr2;

    ptr1 = (int*)malloc(size1*sizeof(int));  // allocating the memory
    if (ptr1 == NULL){   // check for allocation
            printf("Memory not allocated");
            exit(0);
    }
    else{
    printf("Enter the elements of first array\n");
    for(i=0;i<size1;i++)
    {
        fflush(stdin); // for clearing buffer
        scanf("%d",&ptr1[i]);
        sum1 += ptr1[i]; // sum of elements of first array
    }
    }
    printf("Enter the size of second array\n");
    scanf("%d",&size2);
    ptr2 = (int*)malloc(size2*sizeof(int));
    if (ptr2 ==NULL){
            printf("Memory not allocated");
            exit(0);
    }

    else{
    printf("Enter the elements of the second array\n");

    for(i=0;i<size2;i++)
    {
        fflush(stdin);
        scanf("%d",&ptr2[i]);
        sum2 += ptr2[i]; // sum of elements of second array
    }
    }

    printf("The sum of two arrays is : %d",(sum1+sum2)); // finally adding the sum of both the arrays
}
