#include <stdio.h>
 
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	i=n;j=n;
	static int z;
	for(k=0;k<n;k++)
	{
		while(i-->0)
		printf(" ");
		while(j>0)
		{
			printf("%d",++z);
			}
			i=n-1;
}}
 
