/*
	WAP to perform evaluation of Postfix Expression
*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define N 15

typedef struct stack
{
	int a[N];
	int top;
}stk;


void push(stack *s, int b)
{
	if(s->top==N-1)
	{
		printf("\nStack Overflow\n\n");
	}
	else
	{
		s->top++;
		
		s->a[s->top] = b;
	}
}



int pop(stack *s)
{
	int p;
	p = s->a[s->top];
	s->top = s->top-1;
		
	return p;
}


int isOperand(char x)
{
	if(x>='0' && x<='9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int evaluate(char postfix[])
{
	stk s;
	s.top = -1;
	
	int op1, op2, x, v, i;
	
	for(i=0; i<strlen(postfix); i++)
	{
		x = postfix[i];
		
		if(isOperand(x))
		{
			push(&s, (int)x-'0');
		}
		else  // when x is operator
		{
			op1= pop(&s);
			op2= pop(&s);
			
			if(x == '+')
			{
				v = op2 + op1;
			}
			else if(x == '-')
			{
				v = op2 - op1;
			}
			else if(x == '*')
			{
				v = op2 * op1;
			}
			else
			{
				v = op2 / op1;
			}
			
			push(&s, v);
		}
	}
	
	return pop(&s);
}


int main()
{
	system("cls");
	
	char postfix[20]; int z;

	printf("Input an Postfix Expression\n");
	gets(postfix);
	
	z = evaluate(postfix);
	
	printf("\n\nResult = %d",z);
	
	getch();

	return 0;
}
