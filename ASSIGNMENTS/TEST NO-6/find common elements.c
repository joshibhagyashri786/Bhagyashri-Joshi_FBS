#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={1,6,7,3,2};
	int i,j;
	
	printf("common elements are: ");
	 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
				break;
			}
		}
	 } 
	 return 0;
}