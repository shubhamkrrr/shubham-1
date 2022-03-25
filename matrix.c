#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],p,q,m,n,i,j,k;
	printf("enter the order of matrix a(p*q)");
	scanf("%d%d",&p,&q);
	printf("enter the order of matrix b(m*n)");
	scanf("%d%d",&m,&n);
	if(q!=m)
	{	
		printf("matrix multiplication not possible");
		return 1;
	}
	printf("enter matrix a");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}

	printf("matrix a:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("\t%d",A[i][j]);
		}
		printf("\n");
	}
	printf("enter matrix B");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}

	printf("matrix B:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",B[i][j]);
		}
		printf("\n");
	}
	

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=0;
			for(k=0;k<n;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}

	}
	printf("RESAULTANT matrix C:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("\t%d",C[i][j]);
		}
		printf("\n");
	}
	return 0;

}
