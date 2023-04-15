#include<iostream>
using namespace std;
class Add
{
    public:
    Add (int x,int y)
    {
        cout<<"Addition of x and y is :"<<x+y<<endl;
    }
    Add (int a,int b,int c)
    {
        cout<<"Addition of a,b and c is :"<<a+b+c<<endl;
    }
    Add (double a,double b)
    {
        cout<<"multiplication of a and b is :"<<a*b<<endl;
    }
};
int main()
{
    Add x(10,20),y(2.5,3.5),z(1,2,3);
}