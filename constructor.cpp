#include<iostream>
using std::string;

class Student{
    public:
    string name;
    string company;
    int age;

    void IntroduceYourself(){
        std::cout <<"name - " << name <<std::endl;
        std::cout <<"company - " << company <<std::endl;
        std::cout <<"age - " << age <<std::endl;
    }
};
int main(){
    Student student1;
    //student1.name ="akanksh";
    //student1.company ="Google";
    //student1.age =25;
    student1.IntroduceYourself();
    
    Student student2;
    /*student2.name ="shubbham";
    student2.company ="Amazon";
    student2.age =27;*/
    student2.IntroduceYourself();



}