#include<stdio.h>
#include<stdlib.h>
struct college
{
char *clg_name;
char uniname [20];
};
struct dob
{
int day;
char *month;
int year;
};
struct stu_info
{
int rn;
char *name;
char adrs [30];
};
struct student
{
 struct stu_info *a;
 struct dob *b;
 struct college *c;
};
void read(struct student *emp)
{
emp->a=(struct stu_info*)malloc(sizeof (struct stu_info));
emp->b=(struct dob*)malloc(sizeof (struct dob));
emp->c=(struct college*)malloc(sizeof (struct college));
printf("\nEnter the student Info(Registration number, name, address) \n");
emp->a->name=(char*)malloc(sizeof (char)*20);
scanf ("%d %s %s" , &emp->a->rn,emp->a->name,emp->a->adrs) ;
printf("\nEnter the date of birth(day, month, year) \n");
emp->b->month=(char*)malloc(sizeof (char)*20);
scanf ("%d %s %d" ,&emp->b->day ,emp->b->month, &emp->b->year) ;
printf("\nEnter the college (college name, university name) \n");
emp->c->clg_name=(char*)malloc(sizeof (char)*20);
scanf ("%s %s" ,emp->c->clg_name, emp->c->uniname);
}
void display(struct student *emp)
{
printf("\nstudent Info(Registration number, name, address) \n");
printf ("%d %s %s" ,emp->a->rn,emp->a->name,emp->a->adrs) ;
printf("\ndate of birth(day, month, year) \n");
printf ("%d %s %d" ,emp->b->day ,emp->b->month, emp->b->year) ;
printf("\ncollege (college name, university name) \n");
printf ("%s %s" ,emp->c->clg_name, emp->c->uniname);
}
void main()
{
int i;
struct student *emp;
emp=(struct student*)malloc(sizeof (struct student));
read(emp);
display (emp);
}
