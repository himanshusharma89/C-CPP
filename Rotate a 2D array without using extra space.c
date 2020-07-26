#include<stdio.h>
int main()
{
	int num;scanf("%d",&num);
	while(num--)
	{
	    int n;scanf("%d",&n);
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
	    
	    for(int i=0;i<n;i++)
	    for(int j=n-1;j>=0;j--)
	    printf("%d ",a[j][i]);
	    printf("\n");
	}
}

// You are given an n x n 2D matrix representing an image. Rotate the image by 90 degrees (clockwise). You need to do this in place. Note that if you end up using an additional array, you will only receive partial score.
