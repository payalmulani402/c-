#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    public:
    void setdata(int a,int b, int c)
    {
        l=a,w=b,h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    Box operator- (Box &n)  //use -,*,/ operator
    
    {
        Box t;
        t.l=l-n.l;
        t.w=w-n.w;
        t.h=h-n.h;
        return t;
    } 
 };
 int main()
 {
    Box a,b,c;
    a.setdata(2,2,2);
  cout<<"volume of Box A is:"<<a.getdata()<<endl;
  b.setdata(3,3,3);
  cout<<"volume of Box B is:"<<b.getdata()<<endl;
    c=a-b;//5,5,5  
    cout<<"volume of Box C is:"<<c.getdata()<<endl;
}