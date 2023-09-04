#include<stdio.h>
int n;
void reverse (int* a,int* b)
{
    int t,i;
    for(i=0;i<n/2;i++)
    {   t=*(a+i);
        *(a+i)=*(b-i);
        *(b-i)=t;
    }
}
void main()
{
    int *ptr,*a,*b;
    printf("Enter the no.of elements in the array to be reversed\n");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the elements of the array\n");
    ptr=arr;
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    a=ptr;
    b=ptr+n-1;
    reverse(a,b);
    printf("The reversed array is \n");
    for (i=0;i<n;i++)
    {
            printf("%d \t",*(ptr+i));
    }
}

