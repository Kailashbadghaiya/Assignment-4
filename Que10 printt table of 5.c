#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n=5;

    do
    {
        printf("%d x %d = %d\n",i,n,n*i);
        i++ ;
    }
    while(i<=10);
    return 0;
}
