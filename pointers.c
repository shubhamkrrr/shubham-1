#include<stdio.h>
#include<math.h>
int main()
	{
	int n,i;
	float *p,mean=0,var=0,sd=0,sum=0,a[20];
		printf("enter n\n");
		scanf("%d",&n);
		printf("Enter array elements\n");
		p=a;
		for(i=0;i<n;i++)
		{
		scanf("%f",p);
		p++;
		}
		printf("array elements are:");
		p=a;
		for(i=0;i<n;i++)
		{
		printf("%f",*p);
		p++;
		}
		p=a;
		for(i=0;i<n;i++)
		{
		sum=sum+*p;
		p++;
		}
		mean=sum/n;
		printf("mean=%f",mean);
	p=a;
		for(i=0;i<n;i++)
		{
		var=var+pow((*p-mean),2);
		p++;
		}
		var=var/n;
		printf("varience=%f",var);
		sd=sqrt(var);
		printf("standard derivation=%f",sd);
	
	return 0;
}
