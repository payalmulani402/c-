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
int main()
{    Dervied1 a;
    a.setn(10);
    a.Add();

    Dervied2 b;
    b.setn(2);
    b.mul();
}