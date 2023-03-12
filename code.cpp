#include <iostream>
using std::string;

class student{
    public:
    string name;
    string company;
    int age;
    
    void introduceyoureself(){
        std::cout <<"name -"<< name <<std::endl;
         std::cout <<"company -"<< company <<std::endl;
          std::cout <<"age -"<< age <<std::endl;
    }
};
int main(){
    student student1;
    student1.name = "Aman";
    student1.company = "IBM";
    student1.age =45;
    student1.introduceyoureself();
    
    student student2;
    student2.name = "sarvagaya";
    student2.company = "IIT";
    student2.age =25;
    student2.introduceyoureself();
}
