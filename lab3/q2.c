#include<stdio.h>
#include<stdlib.h>
void smallest(int*ptr,int n)
{
    int *s,i;
    s=ptr;
    for(i=0;i<n;i++)
        if(*s>*(s+1))
        s=s+1;
    printf("\n %d is the smallest element");
}

void main()
{
    int i,*ptr,n;
    printf("Enter the no. of array elements\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    smallest(ptr,n);
}
