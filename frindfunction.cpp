#include<iostream>
using namespace std;
class Box 
{
    int l,b;
    friend Box sum (Box,Box,Box);
    public:
    void setdata (int x,int y)
    {
        l=x,b=y;
    }
    int getdata()
    {
        return l*b;
    }
};
Box sum (Box a,Box c,Box x)
{
    Box t;
    t.l= a.l+c.l+x.l;
    t.b= a.b+c.b+x.b;
    return t;              //object as return
}
int main()
{
    Box a,b,c,d;
    a.setdata(2,2);
    b.setdata(3,3);
    d.setdata(4,4);
    cout<<"Area of Box A is :"<<a.getdata()<<endl;
    cout<<"Area of Box B is :"<<b.getdata()<<endl;
    cout<<"Area of Box D is :"<<d.getdata()<<endl;
    c=sum (a,b,d);
    cout<<"Area of Box C is :"<<c.getdata()<<endl;
    }