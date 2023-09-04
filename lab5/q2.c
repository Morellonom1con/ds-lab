#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	char arr[50];
	int tos;
} STACK;
void push(STACK*s,char pu)
{
	s->arr[(s->tos)+1]=pu;
	s->tos++;
}

void display(STACK*s)
{
	int i;
	for(i=0;i<=s->tos;i++)
	printf("%c \n",s->arr[i]);

}

void main()
{
	int n,c=0,i;
	char word[20],pu;
	STACK s;
	s.tos=-1;
	printf("Enter a word to check if its a palindrome\n");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{
		pu=word[i];
		push(&s,pu);
	}

	for(i=0;i<=s.tos;i++)
	{if(s.arr[i]!=s.arr[s.tos-i])
		c++;}
	if(c==0)
	{
		printf("the entered word is a palindrome");
	}
	else
	{
		printf("the entered word is not a palindrome");
	}
}
