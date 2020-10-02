#include<stdio.h>
int a[10][10];
int f[10];
void get(int n)
{
	int i,j;
	printf("\nenter the inorder relational matrix");
	for(i=0;i<n;i++)
	{
		printf("\nEnter for element %d",i);
		f[i]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
char check(int y)
{
	if(y==0)
	{
		return 'a';
	}
	else if(y==1)
	{
		return 'b';
	}
		else if(y==2)
	{
		return 'c';
	}
		else if(y==3)
	{
		return 'd';
	}
		else if(y==4)
	{
		return 'e';
	}
		else if(y==5)
	{
		return 'f';
	}
		else if(y==6)
	{
		return 'g';
	}
		else if(y==7)
	{
		return 'h';
	}
		else if(y==8)
	{
		return 'i';
	}
		else if(y==9)
	{
		return 'j';
	}
}
void display(int n,int i)
{
	char t;
	int j;
	if(f[i]==1)
	{
		return;
	}
	else
	{
		for(j=0;j<n;j++)
		{
			if((a[i][j]==1)&&(f[j]!=1))
			{
			t=check(j);
			printf("%c\t",t);
			f[j]=1;
			}
		}
		
	}
}
void main()
{
	int n,i;
	printf("enter the no of variables");
	scanf("%d",&n);
	get(n);
	for(i=0;i<n;i++)
	{
		display(n,i);
	}
}
