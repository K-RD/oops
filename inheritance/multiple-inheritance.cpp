#include<iostream>
using namespace std;

class rollNo{
    protected:
        int roll;

    void inputRoll(){
        cout<<endl<<"Enter your roll no : ";
        cin>>roll;
    }
    void displayRoll()
    {
        cout<<endl<<"Student's roll no is "<<roll<<endl;
    }
};

class marksScored{
    protected:
        int marks,marks2;

    void inputMarks(){
        cout<<endl<<"Enter your marks of two subjects : ";
        cin>>marks>>marks2;
    }
    void displayMarks()
    {
        cout<<endl<<"Student's marks is "<<marks<<" and "<<marks2<<endl;
    }
    
};

class result:public rollNo, public marksScored{
    protected:
        int totalMarks; 
    public:
        //int totalMarks = marks + marks2;
        void displayResult()
        {
            inputRoll();
            inputMarks();
            displayRoll();
            displayMarks();
            totalMarks = marks + marks2;
            cout<<endl<<"Total marks scored is "<<totalMarks<<endl;
        }
};

int main()
{
    result r;
    r.displayResult();

    return 0;
}



