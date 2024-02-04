// Use of bad_alloc exception in cpp.
// bad_alloc exception is returned when there is no sufficient memory while creating any object with new keyword.

#include <iostream>
using namespace std;

class animal
{
private:
    int weight;
    int sex;

public:
    enum sex_options
    {
        male,
        female
    };
    void set(int i, enum sex_options c)
    {
        weight = i;
        sex = c;
    }

    void get()
    {
        cout << "The weight is " << weight << " kg" << endl;
        cout << "The sex is " << ((sex >= 0 && sex <= 1 && sex == 0) ? "male" : "female") << endl;
    }
};

int main()
{
    // Creating object with dynamic memory allocation using new keyword.s
    animal *rabbit;
    try
    {
        rabbit = new animal;
    }
    catch (bad_alloc ba)
    {
        cout << "Bad Allocation occurred ... object rabbit was not created successfully" << endl;
        return 1;
    }

    cout << "The object rabbit : " << endl;
    (*rabbit).set(25, animal::male);
    (*rabbit).get();
    delete rabbit;

    // Creating object without dynamic allocation.
    cout << "The object cat : " << endl;
    animal cat;
    cat.set(23, animal::female);
    cat.get();

    return 0;
}