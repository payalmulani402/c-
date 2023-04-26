#include<iostream>
using namespace std;
class Base
{
    protected:
    int n;
    public:
    void setn(int x)
    {
        n=x;
    }
};
class Dervied1 : public Base
{
    public:
    void Add()
    {
        cout<<"Addition is :"<<n+n<<endl;
    }
};
class Dervied2: public Base
{
    public:
    void mul()
    {
        cout <<"multiplication is : "<< n*n<<endl;
    }
};
class ABC: public Dervied1
{
    public:
    void abcdata()
    {
        cout<<" sub is :"<<n-2<<endl;
    }
};
int main()
{
    ABC Z;
    Z.setn(10);
    Z.Add();
    Z.abcdata();

    Dervied2 d;
    d.setn(15);
    d.mul();
}