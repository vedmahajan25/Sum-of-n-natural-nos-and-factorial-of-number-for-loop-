//sum of n natural nos
#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for (i=1; i<=n; i++)                      
	{
		sum = sum + i;
	}
	printf("\nThe sum of 0 to %d is %d",n,sum);
return 0;
}   

//Factorial of n
#include<stdio.h>
int main()
{
	int n,i,product=1;
	printf ("Enter value of n : ");
	scanf("%d",&n);
	product = 1;
	for (i=1; i<=n; i++)
	{
		product = product*i;
	}
	printf("\n>The factorial of number %d is %d",n,product);
	return 0;
}+ 
