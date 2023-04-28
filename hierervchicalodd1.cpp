#include<iostream>
using namespace std;
class Base1
{
    protected:
    int n,i;
    public:
    void setn()
    {
        cout<<"enter the number:";
        cin>>n;
    }
};
class Base2
{
   protected:
    int m;
    public:
    void setm()
    {
        cout<<"enter the number:";
        cin>>m;
    }
};
class Dervied1: public Base{
    public:
    void odd()
    {
        for (i=m;i<n;i++)
        {
            if (i%2!=0)
    {
        cout<<" "<<i<<endl;
    }
        }
    }
};

class Dervied2: public Base
{
    public:
    void odd()
    {
        for(i=m;i<n;i++)
        {
            if(i%2!=0)
    {
        cout <<" "<<i<<endl;
    }
        }
    }
};
int main()
{
    Dervied1 d;
    d.setn();
    d.odd();

    Dervied2 b;
    b.setm();
    b.odd();
}