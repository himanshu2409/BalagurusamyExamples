//Program 5.5 Static Member Function

#include<iostream>
using namespace std;

class Test
{
    int code;
    static int count;
    public:
    void setcode(void)
    {
        code=++count;
    }
    void showcode(void)
    {
        cout<<"object number : "<<code<<endl;
    }
    static void showcount(void)
    {
        cout<<"count : "<<count<<endl;
    }
};

int Test::count;
int main()
{
    Test t1,t2;
    t1.setcode();
    t2.setcode();
    Test::showcount();

    Test t3;
    t3.setcode();

    Test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}

/*
Output=
count : 2
count : 3
object number : 1
object number : 2
object number : 3
*/