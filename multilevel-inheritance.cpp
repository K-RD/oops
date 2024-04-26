#include<iostream>
using namespace std;

class student
{
	protected:
		int roll;

	void input_roll()
	{
		cout<<endl<<"Enter the students roll no : ";
		cin>> roll;
	}
	void display_roll()
	{
		cout<<endl<<"Roll No of student is "<<roll<<endl;
	}
};

class test: public student
{
	protected:
		float sem1,sem2;

	void input_test()
	{
		cout<<endl<<"Enter the marks of semester 1 and semester 2 : ";
		cin>> sem1>>sem2;
	}
	void display_test()
	{
		cout<<endl<<"Semester 1 marks : "<<sem1<<endl;
		cout<<endl<<"Semester 2 marks : "<<sem2<<endl;
	}
};

class result:public test
{
	int total;
	public:
		void display_result()
		{
			input_roll();
			input_test();
			display_roll();
			display_test();

			total = sem1+sem2;

			cout<<endl<<"Total marks obtained by student is "<<total<<endl;
		}
};

int main()
{
	result r;

	r.display_result();

	return 0;
}
