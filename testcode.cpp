#include<iostream>
using namespace std;
class test
{
    private:
    int testcodeno;
    char description[20];
    int nocandidate;
    int centerread;
    int CALCATR()
    {
        return (nocandidate/100+1);
    }
    public:
    void SCHEDULE()
    {
        cout<<"enter testcodeno:";
        cin>>testcodeno;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter nocandidate:";
        cin>>nocandidate;
        cout<<"enter centerread:";
        cin>>centerread;
        

           centerread = CALCATR();
    }
       void DISPTEST()
       {
        cout<<"testcodeno:"<<testcodeno<<endl;
        cout<<"desctription:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"centerreqd:"<<centerread<<endl;
        
       }
};
int main()
{
    test b;
    b.SCHEDULE();
    b.DISPTEST();
}















