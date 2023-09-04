#include<stdio.h>
#include<stdlib.h>
struct adrs
{
int hn;
int zc;
char state[20];
};

struct dob
{
int day;
int month;
int year;
};

struct emp
{
char name[20];
struct adrs a;
struct dob b;
};

void read(struct emp *emp)
{
printf("\nEnter the name\n");
scanf("%s",emp->name);
printf("\nEnter the date of birth(day, month, year)\n");
scanf ("%d %d %d",&emp->b.day,&emp->b.month,&emp->b.year);
printf("\nEnter the address(house no.,zip code, state) \n" );
scanf("%d %d %s" , &emp->a.hn, &emp->a.zc,emp->a.state);
}

void display(struct emp *emp)
{
printf("\nname: \n");
printf("%s",emp->name) ;
printf("\ndate of birth(day, month, year): \n");
printf("%d %d %d",emp->b.day,emp->b.month,emp->b.year);
printf("\naddress (house no.,zip code, state): \n");
printf("%d %d %s",emp->a.hn,emp->a.zc,emp->a.state) ;
}
void main()
{
int n,i;
printf("\nEnter the number of elements in the array of employees\n");
scanf("%d",&n) ;
struct emp *emp;
emp=(struct emp*) malloc(sizeof (struct emp) *n) ;
for (i=0;i<n; i++)
{
read (emp+i) ;
}
for (i=0;i<n; i++)
{
printf("\nEmployee %d\n",i+1);
display(emp+i);
}
}
