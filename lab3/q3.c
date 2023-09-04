#include<stdio.h>
void printarr(int*ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d \t",(*ptr+i));
    }
}

int *rtnptr(int *ptr, int n)
{
    return ptr+n-1;
}

void main()
{
    int n,i,*ptr,*ptr2,**dptr;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    ptr=arr;
    printf("Enter the elements in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printarr(ptr,n);
    ptr2=rtnptr(ptr,n);
    dptr=&ptr2;
    printf("\n The element in the last position whose address is stored in the returned pointer is %d",*ptr2);
    printf("\n The element stored in the position stored by the pointer pointing to the previous pointer is %d",**dptr);
}
