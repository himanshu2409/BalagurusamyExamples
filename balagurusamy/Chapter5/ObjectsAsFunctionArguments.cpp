//Example 5.7 Objects as Arguments

#include<iostream>
using namespace std;

class time
{
    int hours;
    int minutes;
    public:
    void getTime(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void putTime(void)
    {
        cout<<hours<<" hours and ";
        cout<<minutes<<" minutes "<<endl;
    }
    void sum(time,time);
};
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time t1,t2,t3;
    t1.getTime(2,45);
    t2.getTime(3,30);
    t3.sum(t1,t2);


    cout<<"T1= "; t1.putTime();
    cout<<"T2= "; t2.putTime();
    cout<<"T3= "; t3.putTime();
return 0;
}

/*
Output
T1= 2 hours and 45 minutes 
T2= 3 hours and 30 minutes
T3= 6 hours and 15 minutes

*/