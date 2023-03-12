#include <iostream>
using std::string;

class student{
	private:
    string name;
    string company;
    int age;
 public:
 	void setname(string name) {
 		name = name;
	 }
	 string getname() {
	 	return name;
	 }
	 void setcompany(string company) {
	 	company = company;
	 }
	 string getcompany() {
	 	return company;
	 }
	 void setage(int age) {
	 	age = age;
	 }
	 int getage() {
	 	return age;
	 }
    void introduceyoureself(){
        std::cout <<"name -"<< name <<std::endl;
         std::cout <<"company -"<< company <<std::endl;
          std::cout <<"age -"<< age <<std::endl;
    }
    student(string name, string company, int age){
        name = name;
        company = company;
        age = age;
    }
};
int main(){
    student student1 = student("Aman", "IBM",45);
    student1.introduceyoureself();
    
    student student2 =student("sarvagaya", "IIT", 25);
    student2.introduceyoureself();
    
    student1.setage(45);
    std::cout <<  student1.getname() << " is " <<student1.getage() <<" years old" << std::endl;
}
