/* 
    WAP to check correctness of parenthesis of input expression usig Stack ( Application of Stack)
*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define N 20

typedef struct stack
{
	int top;
	int a[N];
	
}stk; 


void push(stack *s, int b)
{
	// ASCII Value of parenthesis will come in b
	// No need to check Overflow 
	
	s->top++;
	s->a[s->top] = b;
}


int pop(stack *s)
{
	int p;		// ASCII value of char
	
	// No need for checking Underflow
	
	p = s->a[s->top] ;
	s->top--;
	return p;
}


int isOpenBracket(int x)
{
	if(x == '(' || x == '{' || x == '[')
	{
		return 1;
	}
	else		return 0;
}


int isClosedBracket(int x)
{
	if(x == ')' || x == '}' || x == ']')
	{
		return 1;
	}
	else		return 0;
}

int isEmpty(stack *s)
{
	if(s->top == -1)		return 1;
	else					return 0;	
}


int isValid(char s1[])		// This is the Driver Function Not main()
{
	stack s;
	s.top = -1;
	int i,x,element;
	
	for(i=0; i<strlen(s1); i++)
	{
		x = s1[i];	
		
		if(isOpenBracket(x))
		{
			push(&s,x);
		}
		if(isClosedBracket(x))
		{
			if(isEmpty(&s))
			{
				return 0;
			}
			else
			{
				element = pop(&s);
				
				if(x==')'&&element!='(')		return 0;
				if(x=='}'&&element!='{')		return 0;
				if(x==']'&&element!='[')		return 0;
			}
		}
	}	
	if(isEmpty(&s))		return 1;
	else				return 0;
}


int main()
{
	system("cls");

	char s1[20];
	
	printf("Enter Expression = ");	
	gets(s1);
	
	if(isValid(s1))
	{
		printf("\nExpression is Valid....");
	}
	else
	{
		printf("\nExpression invalid.");	
	}
	
	getch();

	return 0;
}
