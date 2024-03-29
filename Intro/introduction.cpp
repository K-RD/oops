// Program to implement class.
// class -> User defined data type.
//          Class -> Attributes, Behaviors, Methods.
//
// Access Modifiers-> Private(Default), Public, Protected.
//          Private -> Cannot be accessible outside of the class.
//          Public -> can be accessed from outside of the class.
//
// Constructor -> Special type of method that is invoked each time object of the class is created.
//      Rules for creating constructor.
//                1. Constructor have no return type. ( No mean we do not use void)
//                2. Same name as class.
//                3. Needs to be public most of the time, except few cases.
//
//
//      Default Constructor -> A constructor that is automatically generated by the compiler.

// OOPS Concept -> Encapsulation, Abstraction, Inheritance, Polymorphism.
//
//  Encapsulation -> Bundling together data and methods that operates on that data within a class.
//                -> We encapsulate data and methods to prevent anyone or anything outside of our
//                   class to be able to directly able to access our data & interact with it.
//                -> We provide public methods for necessary operation on data. ( Getters and Setters).
//          Getter & Setters -> We can apply few conditions check before updating any data member.
//
// Abstraction -> It means hiding complex things behind a procedure that make those things look simple.
//          Ex: -> Press a button to click a pic in mobile phone.

#include <iostream>
using std::cout;
using std::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void IntroduceYourself()
    {
        cout << "Hello I am " << Name << " from " << Company << ", I am " << Age << " years old." << std::endl;
    }

    Employee(string name)
    {
        Name = name;
    }
    Employee(string name, string company)
    {
        Name = name;
        Company = company;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Robind", "GEC Arwal", 21);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself();

    Employee Satyam("Satyam", "GEC Arwal", 20);
    Employee Suraj = Employee("Suraj", "GEC Arwal", 21);

    Employee Aniket = Employee("Aniket", "GEC Arwal");

    return 0;
}