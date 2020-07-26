#include <stdio.h>
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
}
void sort(int a[],int n)
{
    for(int i=0;i<=n-1;i++)
    for(int j=i+1;j<=n;j++)
    if(a[i]>a[j])
    swap(&a[i],&a[j]);
}
void med(int a[],int n)
{
    int arr[n],m;
    for(int i=0;i<=n;i++)
    {
        arr[i]=a[i];
    }
    sort(arr,n);
    /*for(int i=0;i<=n;i++)
    printf("%d ",arr[i]);
    printf("\n");*/
    if(n%2==0)
    printf("%d\n",arr[n/2]);
    else
    {
        m=arr[n/2]+arr[n/2+1];
        m=m/2;
        printf("%d\n",m);
    }
}
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        med(a,i);
    }
}
