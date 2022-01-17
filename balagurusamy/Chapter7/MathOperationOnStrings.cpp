#include<iostream>
#include<cstring>
using namespace std;

class string1
{
    char *p;
    int len;
    public:
        string1()
        {
            len=0;
            p=0;
        }
        string1(const char *s);
        string1(const string1 &s);
        ~string1()
        {
            delete p;
        }
        //+ operator
        friend string1 operator+(const string1 &s,const string1 &t);
         //<= operator
        friend int operator<=(const string1 &s,const string1 &t);
        friend void show(const string1 s);
};

string1::string1(const char *s)
{
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
string1::string1(const string1 &s)
{
    len=s.len;
    p=new char[len+1];
    strcpy(p,s.p);
}

//overloading + operator
string1 operator+(const string1 &s,const string1 &t)
{
    string1 temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return (temp);
}

int operator<=(const string1 &s,const string1 &t)
{
    int m=strlen(s.p);
    int n=strlen(t.p);
    if(m<=n)
        return 1;
    else
        return 0;
}

void show(const string1 s)
{
    cout<<s.p;
}

int main()
{
    string1 s1="Himanshu";
    string1 s2="Kaushal";
    string1 s3="Deepak";
    string1 t1,t2,t3;
    t1=s1;
    t2=s2;
    t3=s1+s3;
    cout<<"\nt1= "; show(t1);
    cout<<"\nt2= "; show(t2);
    cout<<endl;
    cout<<"\nt3= "; show(t3);
    cout<<endl;
    if(t1<=t3)
    {
        show(t1);
        cout<<" smaller than ";
        show(t3);
        cout<<endl;
    }
    else
    {
        show(t3);
        cout<<" smaller than ";
        show(t1);
        cout<<endl;
    }
    return 0;
}

/*
Output=
t1= Himanshu
t2= Kaushal

t3= Deepak
Deepak smaller than Himanshu

*/