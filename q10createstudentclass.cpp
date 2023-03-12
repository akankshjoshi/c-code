#include <iostream>
using namespace std;
class student
{
private:
    int rollno;
    char fname[10],mname[10],lname[10];
    char branch[15];
    char city[15];
public:
    void get_data()
    {
        cout<<"Enter Roll Number"<<endl;
        cin>>rollno;
        cout<<"Enter First Name"<<endl;
        cin>>fname;
        cout<<"Enter Middle Name"<<endl;
        cin>>mname;
        cout<<"Enter Last Name"<<endl;
        cin>>lname;
        cout<<"Enter Branch"<<endl;
        cin>>branch;
        cout<<"Enter City"<<endl;
        cin>>city;
    }
    void display()
    {
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"First Name: "<<fname<<endl;
        cout<<"Middle Name: "<<mname<<endl;
        cout<<"Last Name: "<<lname<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"City: "<<city<<endl;
    }
};
int main()
{
    student s1;
    cout << "Enter student details" << endl;
    s1.get_data();
    cout << "Student Details " << endl;
    s1.display();
    return 0;
}

