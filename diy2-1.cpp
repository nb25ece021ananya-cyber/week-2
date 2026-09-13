#include<iostream>
using namespace std;

int volume(int side)
{
    return side*side*side;
}
int volume(int l,int b,int h)
{
    return l*b*h;
}
double volume(double r,double h)
{
    return 3.14*r*r*h;
}
int main()
{
    cout<<"volume of cube="<<volume(5)<<endl;
    cout<<"volume of cuboid="<<volume(4,5,6)<<endl;
    cout<<"volume of cyclinder="<<volume(3.0,7.0)<<endl;
    return 0;
    
}