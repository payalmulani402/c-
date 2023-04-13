#include<iostream>
using namespace std;
class report
{
    private:
    int adno;
    char name[20];
    float marks;
    {


    }
    public:
    void READINFO()
    { 
        cout<<"enter adno:";
        cin>>adno;
        cout<<"enter name:";
        cin>>name
        cout<<"enter marks:";
        cin>>marks;


    }

    void DISPLAYINFO()
{
    
        cout<<"adno:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
}

};

int main()
{
      report a;
      a.READINFO();
      a.DISPLAYINFO();
}















