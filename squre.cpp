#include<iostream>
using namespace std;
class base
{
    protected:
    int n,i;
    public:
    void setdata ()
    {
        cout<<" enter the num:"<<endl;
        cin>>n;
    }
};
class derived:public base{ 
    public:
    void getdata()
    { 
        for(i=0;i<=n;i++)
    {
        cout<<"value of n: "<<i*i<<endl;
    }
    }
    
};
int main()
{
    derived d;
    d.setdata();
    d.getdata();
}

