#include<iostream>
using namespace std;

int main(){

	cout<<"The size of 34.4 is "<<sizeof(34.4)<<" "<<typeid(34.4).name()<<endl;
	cout<<"The size of 34.4f is "<<sizeof(34.4f)<<" "<<typeid(34.4f).name()<<endl;
	cout<<"The size of 34.4F is "<<sizeof(34.4F)<<" "<<typeid(34.3F).name()<<endl;
	cout<<"The size of 34.4l is "<<sizeof(34.4l)<<" "<<typeid(34.4l).name()<<endl;
	cout<<"The size of 34.4L is "<<sizeof(34.4L)<<" "<<typeid(34.4L).name()<<endl;
	



	return 0;
}
