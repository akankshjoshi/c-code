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
    student(string name, string company, int age){
        name =name;
        company =company;
        age = age;
    }
};
int main(){
    student student1 = student("Aman","IBM",45);
    student1.introduceyoureself();
    
    student student2 =student("sarvagaya","IIT", 25);
    student2.introduceyoureself();
}
