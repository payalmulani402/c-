#include<iostream>
using namespace std;
class report
{
    private:
    int adno;
    char name[20];
    float marks [5];
    float total;
    float avg;
    void GETAVG()
    {
        float sum=0;
        for(int i=1;i<=5;i++)
        {
            sum = sum + marks[i];
        }
       avg = sum/5;
    }
    public:
    void READINFO()
    { 
        cout<<"enter adno:";
        cin>>adno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter 5 sub of marks:"<<endl;
        for (int i=1;i<=5;i++)
        {
        cin>>marks[i];
        }
            GETAVG();
    }

    void DISPLAYINFO()
{
    
        cout<<"adno:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"enter 5 subject of marks: " ;
          for(int i=1;i<=5;i++)
          {
            cout<<marks[i]<<"";
          }
          cout<<"\nAverage:"<< avg<<endl;
 }

};

int main()
{
      report r;
      r.READINFO();
      r.DISPLAYINFO();
}















