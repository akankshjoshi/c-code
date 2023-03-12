#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;
    public:
        Distance(int f=0, int i =0):feet(f),inches(i){}
        operator int();
        void display();
};
void Distance::display()
{
    cout<<feet<<"ft "<<inches<<"in"<<endl;
}
Distance::operator int()
{
    return feet*12 + inches;
}
int main()
{
    Distance obj(2,4);
    int num = (int)obj;
    obj.display();
    cout<<num;

    return 0;
}

