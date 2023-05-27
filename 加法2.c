#include<stdio.h>
int add(int x,int y)
{
    int z=0;
    z=x+y;//+或-
    return z;
}
int main()
{
    int a=10;
    int b=6;
    int  sum =add(a,b);
    printf("%d\n",sum);
    return 0;
 }
