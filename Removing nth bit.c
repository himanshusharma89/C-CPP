#include <stdio.h>

int main()
{
    int n,bit,new;scanf("%d%d",&n,&bit);
    //shifting 1 to the bit location
    //complimenting it and performing & to delete that bit in n
    new=n&(~(1<<bit));
    printf("Number:%d\n",n);
    printf("New number:%d",new);
}
