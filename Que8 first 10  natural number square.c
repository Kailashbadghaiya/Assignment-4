#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,sq;

    do
    {
        sq=i*i;
        printf("%d is square is equal %d\n",i,sq);
        i++ ;
    }
    while(i<=10);
    return 0;
}
