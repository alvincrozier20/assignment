#include<stdio.h>
int Binary(int x);
int Octal(int x);
	int a[32],r[32],c[32];
int main()
{
	int n,i,j;
	printf("Enter a number");
	scanf("%d",&n);
	int b= Binary(n);
	int o= Octal(n);
	for(i=31;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	printf("\n");
		for(j=31;j>=0;j--)
	{
		printf("%d",r[j]);
	}
	printf("\n");
	for(int k=31;k>=0;k--)
	{
		c[k]=n%16;
		if(c[k]==10)
		{
			printf("A");
		}
			if(c[k]==11)
		{
			printf("B");
		}
			if(c[k]==12)
		{
			printf("C");
		}
			if(c[k]==13)
		{
			printf("D");
		}
			if(c[k]==14)
		{
			printf("E");
		}
			if(c[k]==15)
		{
			printf("F");
		}
			else
		{
			printf("%d",c[k]);
		}
		n=n/16;
	}
	return 0;
}
int Binary(int x)
{
		for(int j=0;j<32;j++)
		{
			a[j]=x%2;
			x=x/2;
			
		}
		
}
int Octal(int x)
{
	for(int j=0;j<32;j++)
	{
		r[j]=x%8;
		x=x/8;
	}
}