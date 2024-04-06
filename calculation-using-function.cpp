#include <iostream>
using namespace std;

class calculation
{
    int x, y, s, m, d;
    void input()
    {
        cout << "Enter two integers : ";
        cin >> x >> y;
    }
    void sum()
    {
        s = x + y;
        cout << "Sum is : " << s << endl;
    }

public:
    void function_01()
    {
        input();
        sum();
    }
};

int main()
{
    calculation obj;
    obj.function_01();

    return 0;
}
