#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
char name[50];
int rno;
double cgpa;
} Student;

void read(Student *s,int n) {
int i;
for(i=0;i<n;i++)
{
printf("Enter student firstname ");
scanf("%s",(s+i)->name);
printf("Enter roll number ");
scanf("%d",&((s+i)->rno));
printf("Enter CGPA ");
scanf("%lf",&((s+i)->cgpa));
}
}

void display(Student *s,int n) {
int i;
for(i=0;i<n;i++)
{
printf("\nName of student: %s\nRoll Number : %d\nCGPA : %lf\n",(s+i)->name,(s+i)->rno,(s+i)->cgpa);
}
}

void sort(Student *s,int n) {
Student temp;
int i,j;
for(i=0;i<n-1;i++) {
for(j=i;j<n;j++) {
if (s[i].rno > s[j].rno) {
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
}
}

int main()
{
int n,i;
printf("Enter the number of students ");
scanf("%d",&n);
Student *st ;
st = (Student *) malloc (n*sizeof(Student *));
read(st,n);
printf("%d",st->rno);
printf("\nThe details of the first student are: ");
printf("\nName of student: %s\nRoll Number : %d\nCGPA : %lf\n",st[0].name,st[0].rno,st[0].cgpa);
sort(st,n);
printf("\nDetails of students sorted in ascending order:\n");
display(st,n);
return 0;
}
