#include<iostream>
using namespace std;
class student{
	private:
		char name[20],add[20];
		int roll,zip;
	public:
		student();
		~student();
		void read();
		void display();
};
student :: student()
{
	cout<<"\n this is student detaile constructor called..........."<<endl;
}
void student :: read()
{
	cout<<"Enter the student name :: ";
	cin>>name;
	cout<<"Enter the student roll no :: ";
	cin>>roll;
	cout<<"Enter the student address :: ";
	cin>>add;
	cout<<"Enter the zipcode :: ";
	cin>>zip;
}
void student :: display()
{
	cout<<"\n The Entered student details are shown belown ::---------- \n";
	cout<<"\nStudent Name :: "<<name<<endl;
    cout<<"\nRoll no   is :: "<<roll<<endl;
    cout<<"\nAddress is :: "<<add<<endl;
    cout<<"\nZipcode is :: "<<zip;
}
student :: ~student()
{
	cout<<"\n\nstudent detail is closed..........\n";
}
int main()
{
	student s;
	s.read ();
	s.display ();
	
	return 0; 
}
