#include<iostream>
using namespace std;
class Base1
{
    protected:
    int n;
    public:
    void setn(int x)
    {
        n=x;
    }
};
class Base2
{
    protected:
    int m;
    public:
    void setm(int x)
    {
        m=x;
    }
};
class Dervied: public Base1,public Base2
{
    public:
    void mul()
    {
        cout <<"multiplication of m and n is : "<< m*n<<endl;
    }
};
int main()
{
    Dervied d;
    d.setn(10);
    d.setm(50);
    d.mul();
}