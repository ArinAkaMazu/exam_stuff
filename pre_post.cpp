#include<Stdio.h>
#include<string.h>
int f(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-' : return 2;
		case '*':
		case '/' :
		case '%' :	return 4;
		case '^':
		case '$': return 5;
		case '(': return 0;
		case '#': return -1;
		default :return 8;
	}
}
int g(char symbol)
{
	switch(symbol)
{
	case '+':
	case '-': return 1;
	case '*':
	case '/':
	case '%': return 3;
	case '^':
	case '$': return 6;
	case '(': return 3;
	case ')': return 0;
	default :return 7;
}
}
void infix_postfix(char infix[], char postfix[])
{
	int top=-1,j=0,i;
	char s[30],symbol;
	s[++top]='#';
	for(i=0; i<strlen(infix); i++)
{
	symbol=infix[i];
	while(f(s[top])>g(symbol))
	{
		postfix[j]=s[top--];
j++;
}
if(f(s[top])!=g(symbol))
		
		
	s[++top]=symbol;
	else
	top--;
}
while(s[top] !='#')
postfix[j++]= s[top--];
postfix[j]='\0';
}
int main()
{
	char infix[20],postfix[20];
	printf("\n enter a valid infix position \n");
	scanf("%s",infix);
	infix_postfix(infix,postfix);
	printf("\n the infix expression is: \n");
printf("%s",infix);
printf("\n your postfix expression is : \n");
printf("%s",postfix);
	return 1;
}
