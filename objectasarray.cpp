#include<iostream>
using namespace std;
class test
{
    public:
    int a,b;
    void setdata();
    int sum()
    {
        return a+b;
    }
};
void test::setdata()
{
 cout <<"enter a:";
 cin>>a;
 cout <<"enter b:";
 cin>>b;
}
int main()
{
    test a[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"input:"<<i+1<<endl;
        a[i].setdata();
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
        cout<<"output:"<<i+1<<endl;
        cout<<"total is:"<<a[i].sum()<<endl;
    }
    }