#include<iostream>
using namespace std;
class volume
{
    public:
    int sum (int a)
    {
        return a*a*a; 
    }
    double sum (double a)
    {
         return 3.14*(a*a)*a;
    }
    double sum (double a,double b,double c)
    {
        return a*b*c;
    }
    double sum (double a,double b)
    {
        return(4/3)*3.14*a*a*a;
    }
};
int main()
{
    volume a;
    cout<<"volume of cudeis:"<<a.sum(2)<<endl;
    cout<<"volume of cylinder:"<<a.sum (5.4)<<endl;
    cout<<"volume of rectangle:"<<a.sum(4.4,1.2,2.1)<<endl;
    cout<<"volume of sphere:"<<a.sum(6.5)<<endl;
}