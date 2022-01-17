//Example 6.6 Constructing Matrix Object

#include<iostream>
using namespace std;

class Matrix
{
    int **p;
    int d1,d2;
    public:
    Matrix(int x,int y);
    void get_element(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int &put_element(int i,int j)
    {
        return p[i][j];
    }
};
Matrix::Matrix(int x,int y)
{
    d1=x;
    d2=y;
    p=new int *[d1];
    for(int i=0;i<d1;i++)
        p[i]=new int[d2];
}
int main()
{
    int m,n,value;
    cout<<"Enter size of matrix: ";
    cin>>m>>n;
    Matrix A(m,n); // matrix object A constructed
    cout<<"Enter matrix elements row by row"<<endl;
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        {
            cin>>value;
            A.get_element(i,j,value);
        }
        cout<<endl;
        cout<<A.put_element(1,2);

    return 0;
}

/*
Output=
Enter size of matrix: 3 4
Enter matrix elements row by row
11 12 13 14
15 16 17 18 
19 20 21 22 

17

*/