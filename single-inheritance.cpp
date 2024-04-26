#include<iostream>
using namespace std;

class A{
    protected:
        int x;
        void input(){
            cout<<"Enter the value of x : ";
            cin >> x;
        }
        void display(){
            cout<<endl<< "The value of x is "<<x<<endl;
        }
};

class B:public A{
    int y;
    public:
    void get(){
        input();
        cout<<endl<<"Enter the value of y : ";
        cin>>y;
    }
    void show(){
        display();
        cout<<endl<<"The value of y is "<<y<<endl;
    }
    void greatest(){
        cout<<endl<<"The greatest value is "<<(x<y?y:x)<<endl;
    }
};

int main()
{
    B obj;
    obj.get();
    obj.show();
    obj.greatest();

    return 0;
}
