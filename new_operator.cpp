// Program to use the new and delete operator in cpp.

#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    cout << "Creating the integer array of size " << size << endl;

    cout << "Dynamic allocation of memory for array arr is successful" << endl;
    arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i << " : ";
        cin >> arr[i];
    }

    cout << "Printing the elements of the array." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "now making the dynamically allocated space free";
    delete (arr);

    return 0;
}