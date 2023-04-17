#include<iostream>
using namespace std;
class Area{
    public:
    int sum(int a)
    {
        return a*a;
    }
    double sum (double r)
    {
        return 3.14*r*r;
    }
    double sum (double h,double b)
    {
        return h*b/2;
    }
};
int main()
{
    Area a;
    cout<<"area of squar : "<<a.sum(5)<<endl;
    cout<<"area of circle : "<<a.sum(2.5)<<endl;
    cout<<"area of tringle : "<<a.sum(4.7,1.2)<<endl;
}