#include<stdio.h>
#include<conio.h>

void insert(int stack[],int data,int *top)
{
	stack[*top]=data;
	(*top)++;

}
void arrange(int stack[],int n,int *top)
{        int i,x,min,pos;
	  min=stack[0];
	for(i=0;i<n;i++)
	{
		if(stack[i]<min)
		{
			min=stack[i];
			pos=i;
		 }
	}
	for(i=0;i<n;i++)
	{
		if(stack[i]==min)
		{
			pos=i;
			stack[*top]=min;
			break;
		}
	}
	x=pos+1;
	for(i=pos;i<n;i++)
	{
		stack[i]=stack[x];
		x++;
	}
	stack[*top]=min;
}
void display(int stack[],int *top )
{
	int i;
	printf("\nOUTPUT:  ");
	for(i=0;i<*top;i++)
	{
		printf("%d  ",stack[i]);
	}
}
void main()
{
	int stack[10];
	int n,data,i,top=0;
	clrscr();
	printf("Enter no. of elements:\n");
	scanf("%d",&n);
	printf("Enter stack elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insert(stack,data,&top);
	}
	printf("INPUT STACK:  ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",stack[i]);
	}
	for(i=0;i<n;i++)
	{
		arrange(stack,n,&top);
	}
	display(stack,&top);
	getch();
}

