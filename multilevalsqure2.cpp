#include<iostream>
using namespace std;
class Base1
{
    protected:
    int n,i;
    public:
    void setn()
    {
        cout<<"enter the n:";
        cin>>n;
    }
};
class Base2 : public Base1
{
    protected:
    int n;
    public:
    void setm()
    {
        cout<<"enter the number:";
        cin>>n;
    }
};
class Dervied: public Base2
{
    public:
    void squre()
    {
        for(i=0;i<n;i++)
        
        {
            cout<<"  "<<i*i<<endl;
        }
        
    }
};
int main()
{
    Dervied d;
    d.setn();
    d.setm();
    d.squre();
}