// Example 5.11 Returning Objects(
#include<iostream>
using namespace std;

class matrix{
     int m[3][3];
     public:
     void read(void)
     {
         cout<<"Enter the elements of 3x3 matrix: "<<endl;
         for(int i=0;i<3;i++)
             for(int j=0;j<3;j++)
             {
                 cout<<"m["<<i<<"]["<<j<<"] = ";
                 cin>>m[i][j];
             }
     }
     void display(void)
     {
         for(int i=0;i<3;i++)
         {
             cout<<endl;
             for(int j=0;j<3;j++)
             {
                 cout<<m[i][j]<<"\t";
             }
         }
     }
     friend matrix trans(matrix);
};

matrix trans(matrix m1)
{
    matrix m2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m2.m[i][j]=m1.m[j][i];
        }
    }

    return (m2);
}

int main()
{
    matrix mat1,mat2;
    mat1.read();
    cout<<"You entered the following matrix :";

    mat2=trans(mat1);
    cout<<"Transposed matrix "<<endl;
    mat2.display();

    return 0;
}
/*
Enter the elements of 3x3 matrix: 
m[0][0] = 1
m[0][1] = 2
m[0][2] = 3
m[1][0] = 4
m[1][1] = 5
m[1][2] = 6
m[2][0] = 7
m[2][1] = 8
m[2][2] = 9
You entered the following matrix :Transposed matrix 

1       4       7
2       5       8
3       6       9

*/