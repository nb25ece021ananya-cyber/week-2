#include<iostream>
using namespace std;
inline int minval(int a,int b)
{
    return(a<b)? a:b;
}
inline int minval(int a ,int b,int c)
{
    return minval(minval(a,b),c);
}
int main()
{
    cout<<"minimum of 2 numbers="<<minval(10,5)<<endl;
    cout<<"minimum of 3 numbers="<<minval(10,5,3)<<endl;
    return 0;
}
