//Example 9.10 this pointer
#include<iostream>
#include<cstring>
using namespace std;

class person
{
    char name[20];
    float age;
    public:
    person(char *s,float a)
    {
        strcpy(name,s);
        age=a;
    }
    person & person::greater(person & x)
    {
        if(x.age>=age)
        return x;
        else
        return *this;
    }
    void display(void)
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    person P1("Himanshu",37.50),
           P2("Kaushal",29.0),
           P3("Deepesh",40.25);
    person p=P1.greater(P3);
    cout<<"Elder person is : "<<endl;
    p.display();
    p=P1.greater(P2);
    cout<<"Elder person is : "<<endl;
    p.display();

    return 0;
}
/*
Output=
Elder person is:
Name: Deepesh
Age: 40.25
Elder person is:
Name: Himanshu
Age: 37.5
*/