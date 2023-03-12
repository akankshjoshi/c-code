#include <iostream>
#define PI 3.14159
using namespace std;

class Circle {
    public:
        float radius;
        
        void setRadius(float r){
            radius = r;
        }
        
        float getArea(){
            float area;
            area = PI *(radius*radius);
            return area;
        }
        
        float getCircumference(){
            float circumference;
            circumference = 2 * PI *radius;
            return circumference;
        }
};

int main() {
	float radius;
	cout<<"Enter the radius of the circle\n";
	cin>>radius;
	
	Circle obj;
	obj.setRadius(radius);
	
	cout<<"Area of the Circle is : ";
	cout<<obj.getArea()<<"\n";
	
	cout<<"Circumference of the Circle is : ";
	cout<<obj.getCircumference()<<"\n";
	
	return 0;
}
