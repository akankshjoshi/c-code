#include<iostream>
using namespace std;
struct student{
	int rollno;
	char name[50];
	float marks;
	int salary;
};
int main(){
	struct student s = { 12 , "Harry" , 90};
	cout<<"the student information is given as follow: "<<endl;
	cout<<endl;
	cout<<"the rollno :"<<s.rollno<<endl;
	cout<<"name:"<<s.name<<endl;
	cout<<"marks"<<s.marks<<endl;
	return 0;
}
