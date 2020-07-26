#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int f=0,l=strlen(str)-1;
    while(l>f)
        if(str[f++]!=str[l--])
        printf("Not plaindrome");
    printf("Palindrome");
}
