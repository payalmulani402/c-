#include<iostream>
using namespace std;
class Area
{
    public:
    Area (double r)
    {
        cout<<"Area of circle:"<<3.14*r*r<<endl;
    }
    Area(int l,int w)
    {
        cout<<"Area of square:"<<l*l<<endl;
    }
    Area(double l,double h)
    {
        cout<<"Area of triangle:"<<(h*l/2)<<endl;
    }
    
};
int main()
{
    Area a(3.5),b(5,7),c(2.3,3.4);
}