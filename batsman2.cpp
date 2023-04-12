#include<iostream>
using namespace std;
class batsman
{
    private :
    int bcode;
    int inning;
    int notout;
    char bname[20];
    int runs;
    int batavg;
    float calcavg()
    {
        
         return runs/(inning-notout);
        
    }
    public:
    void readdata()
    {
        cout<<"enterbcode no :";
        cin>>bcode;
        cout<<"enter name :";
        cin>>bname;
        cout<<"enter inning :";
        cin>>inning;
        cout<<"enter notout :";
        cin>>notout;
        cout<<"enter runs :";
        cin>>runs;

        batavg = calcavg();
    }    
       void displaydata()
       {   
          cout <<"bcodeno:"<<bcode<<endl;
          cout <<" name:"<<bname<<endl;
          cout <<"inning:"<<inning<<endl;
          cout <<"notout:"<<notout<<endl;
          cout <<"runs:"<<runs<<endl;
          cout <<"batavg:" <<batavg<<endl; 
        
    }
};
int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}
