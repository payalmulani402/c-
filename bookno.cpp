#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    int book;
    char bookTITLE[20];
    float price;
    float TOTAlCOST()
    {
        price=book*price;
    }
    public:
    void INPUT()
    { 
        cout<<"enter bookno:";
        cin>>bookno;
        cout<<"enter bookTITLE:";
        cin>>bookTITLE;
        cout<<"enter bookcopy:";             
        cin>>book;
        cout<<"enter price:";
        cin>>price;


        TOTAlCOST();
    }

    void purchse ()
{
    
        cout<<"bookno:"<<bookno<<endl;
        cout<<"bookTITLE:"<<bookTITLE<<endl;
        cout<<"bookcopy:"<<book<<endl;
        cout<<"price:"<<price<<endl;
        
}

};

int main()
{
    book H;
    H.INPUT();
    H.purchse();
}















