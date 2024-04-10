#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	int l,u,m,val; // declaring lower, upper, middle, and value to be input
	l = 0; // setting lower bound to index 0
	u = 9; // setting upper bound to index 9
	
	printf("Enter the value to search : ");
	scanf("%d",&val);
	
	while(l <= u)
	{
		m = (l + u) / 2; // middle value
		if(a[m] == val)
		{
			printf("The value is found at position %d", m + 1); // a[m] is the value
			exit(1);
		}
		
		if(val > a[m]) // if val is greater than checked index then lower index should be 
		               // 1 more than the middle index
		{
			l = m + 1;
		}	
		
		if(val < a[m]) // if val is smaller than checked index then upper index should be 
					   // 1 less than the middle index 
		{
			u = m - 1;	
		}	
	}
	if(l > u)
	{
		printf("Value not found !");
	}
}
