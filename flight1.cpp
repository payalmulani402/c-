#include<iostream>
using namespace std;
class flight
{
    private:
    int flightno;
    char  destination[20];
    float distance;
    float fuel;
    float CALFUEL()
    {
       if (distance<=1000)
        {
          fuel=500;
        }
        else if (distance>1000&& distance<=2000)
        {
          fuel=1100;
        }
        else
        {
            fuel=2200;
        }
        return fuel;
    }
    public:
    void FEEDINFO()
    {
        cout<<"enter flight no:";
        cin>>flightno;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;

        fuel = CALFUEL();
    }
    void SHOWINFO()
    {
        cout<<"fligtno:"<<flightno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
        cout<<"fuel:"<<fuel<<endl;
    }\
};
int main()
{
    flight p;
    p.FEEDINFO();
    p.SHOWINFO();
}







