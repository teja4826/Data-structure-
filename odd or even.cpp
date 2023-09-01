#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to be checked :");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("Invalid Input....");
	}
	else if(num%2==0)
		printf("The Number is EVEN");
	else
		printf("The Number is ODD");
}
