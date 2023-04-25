#include<iostream>
using namespace std;
class Base1
{
    protected:
    int n,i;
    public:
    void setn()
    {
        cout<<"enter the number: ";
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
class Dervied: public Base1,public Base2
{
    public:
    void squer()
    {
        for (i=m;i<n;i++)
        
            {
                cout<<"value of n:"<<i*i<<endl;
            }
    }
    
};
int main()
{
    Dervied d;
    d.setn();
    d.setm();
    d.squer();
}