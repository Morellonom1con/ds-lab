#include<stdio.h>
void read(int **mat);

void display(int **mat);

void prod(int **mat3,int **mat1,int **mat2);

void main()
{
    int **mat1,**mat2,**mat3,r1,c1,r2,c2,i;
    printf("Enter the no. of rows and columns in matrix 1\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the no. of rows and columns in matrix 2\n");
    scanf("%d %d",&r2,&c2);
    mat1=(int**)malloc(sizeof(int*)*(r1));
    for(i=0;i<c1;i++)
        {
            *(mat1+i)=(int*)malloc(sizeof(int)*(c1+1));
        }
         **(mat1)=(r1*10)+c1;

    mat2=(int**)malloc(sizeof(int*)*(r2));
    for(i=0;i<c2;i++)
          {
            *(mat2+i)=(int*)malloc(sizeof(int)*(c2+1));
        }
         **(mat2)=(r2*10)+c2;
    mat3=(int**)malloc(sizeof(int*)*(r1));
    for(i=0;i<c2;i++)
        {
            *(mat3+i)=(int*)malloc(sizeof(int)*(c2+1));
        }
         **(mat3)=(r1*10)+c2;
    printf("Enter the elements of the first matrix\n");
    read(mat1);
    printf("Enter the elements of the second matrix\n");
    read(mat2);
    prod(mat3,mat1,mat2);
    printf("the product matrix is\n");
    display(mat3);
    printf("the second matrix is\n");
    display(mat2);
}

void read(int **mat)
{
    int i,j;
    for (i = 0; i < **mat/10; i++)
        {
            for (j = 1; j <= **mat%10; j++)
            {
                 scanf("%d",(*(mat+i)+j));
            }
        }
}
void prod(int **mat3,int **mat1,int **mat2)
{
    int i,j,k;
    for(i=0;i<**mat1/10;i++)
    {
        for(j=1;j<=**mat2%10;j++)
    {
        *(*(mat3+i)+j)=0;
        for(k=0;k<**mat1%10;k++)
        {
            *(*(mat3+i)+j)+=(*(*(mat1+i)+(k+1)))*(*(*(mat2+k)+j));
        }
    }
    }
}
void display(int **mat)
{
    int i,j;
    for (i=0;i<**mat/10;i++)
    {
        for (j=1;j<=**mat%10;j++)
        {
            printf("\t%d", *(*(mat+i)+j));
        }
        printf("\n\n");
    }
}


