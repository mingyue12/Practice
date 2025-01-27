#include<stdio.h>

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    char arr[] = "abcdef";
    int maxMum = 0;
    int a = 0;
    int b = 0;
    a = 1, b = 0;
    maxMum = max(a,b);
    printf("%d",maxMum);
    printf("ÄãºÃ");
    return 0;
}