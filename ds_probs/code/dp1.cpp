//Q: Find all N-digit binary string that has no consecutive 1:

#include<bits/stdc++.h>
using namespace std;

int binarystrng(int n, int lastdigit)
{
    if(n==0) //base case
    return 0;

    if(n==1)
    {
        if(lastdigit==1)
       return 1; //lastdigit is 1
       else
    return 2; //if lastdigit is 0
    }

    if(lastdigit==0)
        //when last digit 0 then, we can have both 0 & 1 in current position
        return binarystrng(n-1,0) + binarystrng(n-1,1);
    else
        //when last digit is 1 then, we can have only 0
        return binarystrng(n-1,0);


}

int main()
{
    int n=2;
    int bin=binarystrng(n,0);
    printf("string number without consecutive 1:%d",bin);
}
