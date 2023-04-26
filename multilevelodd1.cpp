#include<iostream>
using namespace std;
class Base1
{
    protected:
    int n,i;
    public:
    void setn()
    {
        cout<<"enter the n";
        cin >>n;
    }
};
class Base2 : public Base1
{
    protected:
    int m;
    public:
    void setm()
    {
        cout <<"enter the m:";
        cin >>m;
    }
};
class Dervied: public Base2
{
    public:
    void odd()
    {
        for(i=m;i<n;i++)
    {
        if (i%2!=0)
    {
        cout<<" "<<i<<endl;
    }
    }
    }
};
int main()
{
    Dervied d;
    d.setn();
    d.setm();
    d.odd();
}