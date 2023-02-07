//Q: find the conversion of decimal to binary

#include <stdio.h>
int dectobin(int n)
{
    int d;
    if (n==0)
        return 0;
    else
        d=dectobin(n/2);
        return ((n%2)+10*d);
}

int main()
{
   int n;

   printf("Enter decimal number\n");
   scanf("%d",&n);
   int dec=dectobin(n);
   printf("%d\n",dec);
}
