// Given an array with n distinct elements, convert the given array to a reduced form where all elements are in range from 0 to n-1. The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element, … n-1 is placed for largest element.
#include<stdio.h>
int main()
{
	int num;scanf("%d",&num);
	while(num--)
	{
	    int n;scanf("%d",&n);
	    int a[n],t[n],tmp,k=0;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        t[i]=a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n-i-1;j++)
	            if(t[j]>t[j+1])
	            {
	                tmp=t[j];
	                t[j]=t[j+1];
	                t[j+1]=tmp;
	            }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        if(t[i]==a[j])
	        {
	            a[j]=k++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    printf("%d ",a[i]);
	    printf("\n");
	}
}
