#include<iostream>
using namespace std;
class Box 
{
    int a,b;
    friend Box largest (Box t);
    public:
    void largest()
    {
       cout<<"enter a:";
       cin>>a;
       cout<<"enter b:";
       cin>>b;
    }
};
Box largest (Box t)
{
    if (t.a>t.b)
    {
           cout<<"largest number is a:"<<t.a;
    }
    else 
    {
        cout<<"largest number is b:"<<t.b;
    }
    }
int main()
{
    Box t;
    t.setdata;
    setdata;''
}