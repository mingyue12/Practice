#include<stdio.h>
#include<string.h>

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
    char arr1[] = "abc";
    int maxMum = 0;
    int a = 0;
    int b = 0;
    a = 1, b = 0;
    maxMum = max(a,b);
    int len = strlen(arr1);
    printf("%d\n",len);
    printf("%d\n",maxMum);
    printf("ÄãºÃ");
    return 0;
}