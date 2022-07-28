#include<stdio.h>
int main()
{
	int m,n,p,q,i,j,k,C;
	printf("Enter the order of 1st matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the order of 2nd matrix:\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("Not possible");
		return 1;
	}
	else
	{
		int a[m][n],b[p][q],c[m][q];
		printf("Etnter the elements of 1st matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of 2nd matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			{
				for(j=0;j<q;j++)
				{
					c[i][j]=0;
					for(k=0;k<n;k++)
					{
						c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
					}
		    	}
			}
			printf("The result of matrix:");
			for(i=0;i<m;i++)
			{
				for(j=0;j<q;j++)
				{
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
return 0;
		}
	}
}
