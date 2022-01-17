//Example 6.4 Copy constructor

#include<iostream>
using namespace std;

class code{
    int id;

    public:
    code(){}
    code(int a){ id=a; }
    code(code &x)
    {
        id=x.id;
    }
    void display(void)
    {
        cout<<id;
    }
};

int main()
{
    code A(100);
    code B(A);  //copy constructor
    code C=A;   //copy constructor called again

    code D(200);
    code E(D);

    cout<<"\n id of A:";    A.display();
    cout<<"\n id of B:";    B.display();
    cout<<"\n id of C:";    C.display();
    cout<<"\n id of D:";    D.display();
    cout<<"\n id of E:";    E.display();
    return 0;
}

/*
Output=
id of A:100
id of B:100
id of C:100
id of D:200
id of E:200

*/