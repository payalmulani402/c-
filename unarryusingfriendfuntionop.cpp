#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    public:
    void setdata (int a,int b,int c)
    {
        l=a,w=b,h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    friend Box operator++(Box);
};
Box operator++(Box a)
{
    Box t;
    t.l= ++a.l;
    t.w= ++a.w;
    t.h= ++a.h;
    return t;
}
int main()
{
    Box a,b;
    a.setdata(4,4,4);
    cout<<"volume of Box A is :"<<a.getdata()<<endl;

    b=++a;
    cout<<"volume of Box B is :"<<b.getdata()<<endl;
}