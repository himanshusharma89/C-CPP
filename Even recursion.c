#include <stdio.h>

int reverse(int n)
{
    int t=0;
    while(n!=0)
    {
        t=t*10+n%10;
        n=n/10;
    }
    return t;
    
}
int even(int n,int t)
{   
    if(n==0)
    return t;
    if((n%10)%2==0)
    t=t*10+n%10;
    even(n/10,t);
}

int main()
{
    int n,t=0,k;scanf("%d",&n);
    k=even(n,t);
    //printf("%d\n",k);
    printf("%d",reverse(k));
}
