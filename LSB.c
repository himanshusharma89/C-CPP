#include <stdio.h>

int main()
{
    int n;scanf("%d",&n);
    if(n&1)
    printf("LSB=1");
    else
    printf("LSB=0");
    return 0;
}
