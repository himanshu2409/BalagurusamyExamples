//Example 9.13 Runtime Polymorphism
#include<iostream>
#include<cstring>
using namespace std;
class media
{
    protected:
    char title[50];
    float price;
    public:
    media(char *s,float a)
    {
        strcpy(title,s);
        price=a;
    }
    virtual void display(){} //empty virtual function
};
class book:public media
{
    int pages;
    public:
    book(char *s,float a,int p):media(s,a)
    {
        pages=p;
    }
    void display();
};
class tape:public media
{
    float time;
    public:
    tape(char *s,float a,float t):media(s,a)
    {
        time=t;
    }
    void display();
};
void book::display()
{
    cout<<"Title : "<<title<<endl;
    cout<<"Pages : "<<pages<<endl;
    cout<<"Price : "<<price<<endl;
}
void tape::display()
{
     cout<<"Title : "<<title<<endl;
    cout<<"Play time : "<<time<<endl;
    cout<<"Price : "<<price<<endl;
}
int main()
{
    char *title=new char[30];
    float price,time;
    int pages;
    //book details
    cout<<"Enter book details"<<endl;
   cout<<"Title : "; cin>>title;
   cout<<"Price : "; cin>>price;
    cout<<"Pages : "; cin>>pages;
    book book1(title,price,pages);
    cout<<"Title : "; cin>>title;
   cout<<"Price : "; cin>>price;
    cout<<"Play time (mins ): "; cin>>time;
    tape tape1(title,price,time);
    media* list[2];
    list[0]=&book1;
    list[1]=&tape1;

    cout<<"Media details"<<endl;
    cout<<"-----BOOK-----"<<endl;
    list[0]->display();
    cout<<"------TAPE-----"<<endl;
    list[1]->display();
    return 0;
}

/*
Output=
Enter book details
Title : abc
Price : 88
Pages : 400
Title : def
Price : 90
Play time (mins ): 55
Media details
-----BOOK-----
Title : abc
Pages : 400
Price : 88
------TAPE-----
Title : def
Play time : 55
Price : 90
*/