#include <iostream>
using namespace std;
int factorial( int num);
int main()
{
    int num,fact;
    cin>>num;
    fact=factorial(num);
    cout<<"FACTORIAL="<<fact<<endl;
}
int factorial(int num)
{
    int res;
    if(num==0)
        return 1;
    if(num==1)
        return 1;
    while(num!=1)
    {
        res=num*factorial(num-1);
        return res;
    }
}
