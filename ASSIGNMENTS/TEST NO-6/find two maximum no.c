#include<stdio.h>
int main()
{
	int a[5]={10,25,3,56,42};
	int i,max1,max2;
	
	max1=max2=a[0];
	
	for(i=1;i<5;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			
			max1=a[i];
		}
		else if(a[i]>max2&&a[i]!=max1)
		{
			max2=a[i];
		}
	}
	printf("First max=%d\n",max1);
	printf("Second max=%d\n",max2);
	
	return 0;
}