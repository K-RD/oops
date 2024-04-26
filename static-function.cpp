#include<iostream>
using namespace std;

class cse{
    int x,y;
    static int avg;
    public:
    void input()
    {
        cout<<"\nENTER THE VALUE OF X AND Y : ";
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }
    void avgfun()
    {
        avg = (x+y)/2;
    }
    static void show()
    {
        cout<<"\nAVG VALUE OF BOTH NUMBERS ARE "<<avg<<endl;
    }
};
int cse::avg;

int main()
{
    cse c;
    c.input();
    c.display();
    c.avgfun();
    cse::show();

    return 0;
}
