//Q: find the conversion of binary to decimal
#include<stdio.h>

int bintodec(int n)
{
    int b;
    if(n==0)
    return 0;
    else
        b=bintodec(n/10);
        return ((n%10)+2*b);
}

int main()
{
    int n;
    printf("enter binary number:");
    scanf("%d",&n);
    int bin=bintodec(n);
    printf("%d\n",bin);
}
