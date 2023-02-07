//Q: Find length of longest palindrome substring:
#include<bits/stdc++.h>
using namespace std;

int findpalindrm(string str, int x, int y)
{
    if(x>y) //x is greater then y
        return 0;

    if(x==y) //x and y is same
        return 1;

    if(str[x]==str[y]) //last character of string is same as first character
    {
        return findpalindrm(str, x+1, y+1)+2; //include frst & lst charctr & rec remaing substring[i+1,j-1]
    }

    if(findpalindrm(str,x,y-1) > findpalindrm(str,x+1,y))
        return findpalindrm(str,x,y-1);
    else
        return findpalindrm(str,x+1,y);
}

int main()
{
    string str="ABDFCF";
    int n=str.length();

    cout<<"longest palindrome sequence length:"<<findpalindrm(str,0,n);
}
