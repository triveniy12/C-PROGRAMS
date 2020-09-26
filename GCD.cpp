#include <stdio.h>
using namespace std;
int gcd(int a,int b);

int main()
{
    int a,b,res;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    res=gcd(a,b);
    printf("The GCD of given two number is:%d",res);
    return 0;
}
int gcd(int a,int b)
{
    int r;
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
