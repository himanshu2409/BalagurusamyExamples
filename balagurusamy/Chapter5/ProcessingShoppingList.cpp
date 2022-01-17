#include<iostream>
using namespace std;

const int m=50;
class ITEMS
{
        int itemCode[m];
        float itemPrice[m];
        int count;
        public:
        void CNT(void){ count=0; }
        void getItem(void);
        void displaySum(void);
        void remove(void);
        void displayItems(void);
};
void ITEMS::getItem(void)
{
    cout<<"Enter item code :";
    cin>>itemCode[count];
    cout<<"Enter item cost :";
    cin>>itemPrice[count];
    count++;
}

void ITEMS::displaySum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
        sum+=itemPrice[i];
    cout<<"Total value"<<sum<<endl;
}

void ITEMS:: remove(void)
{
    int a;
    cout<<"Enter item code :";
    cin>>a;

    for(int i=0;i<count;i++)
        if(itemCode[i]==a)
            itemPrice[i]=0;
}

void ITEMS::displayItems(void)
{
    cout<<"Code Price"<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemCode[i];
        cout<<"\n"<<itemPrice[i];
    }
    cout<<endl;
}
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        /* code */
        cout<<"You do the following :";
        cout<<"Enter appropriate number\n";
        cout<<"\n 1. Add an item ";
        cout<<"\n 2. Display total value ";
        cout<<"\n 3. Delete an items ";
        cout<<"\n 4. Display all items ";
        cout<<"\n 5. QUIT ";

        cin>>x;
        switch(x)
        {
            case 1:
                order.getItem();
                break;
            case 2:
                order.displaySum();
                break;
            case 3:
                order.remove();
                break;
            case 4:
                order.displayItems();
                break;
            case 5:
                break;
            default:
                cout<<"Error in input , Please check input again"<<endl;
                break;
        }

    } while (x!=5);
    
    return 0;
}

/*
Output=
You do the following :Enter appropriate number

 1. Add an item
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 1
Enter item code :111
Enter item cost :100
You do the following :Enter appropriate number

 1. Add an item
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 1
Enter item code :222
Enter item cost :200
You do the following :Enter appropriate number

 1. Add an item
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 1
Enter item code :333
Enter item cost :300
You do the following :Enter appropriate number

 1. Add an item
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 2
Total value600
You do the following :Enter appropriate number

 1. Add an item
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 3
Enter item code :222
You do the following :Enter appropriate number

 1. Add an item
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 4
Code Price

111
100
222
0
333
300
You do the following :Enter appropriate number

 1. Add an item 
 2. Display total value
 3. Delete an items
 4. Display all items
 5. QUIT 5

*/