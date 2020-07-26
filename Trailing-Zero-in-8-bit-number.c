#include <stdio.h>
int recursion(int n)
{
    static int num=0;
    if(n==0)
    return 0;
    else
    {
    recursion(n/2);
    num=num*10+n%2;
    return num;
    }

}
int main()
{
    int n,c=0;scanf("%d",&n);
    int num=recursion(n);printf("%d\n",num);
    while(num%10==0)
    {
        c++;
        num=num/10;
    }
    printf("%d",c);
}
