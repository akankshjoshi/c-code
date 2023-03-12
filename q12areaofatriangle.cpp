#include<iostream>
using namespace std;
float area(float);
float area(float,float);
int main(){
	float r,bs,ht;
	cout<<"enter base and heigth of triangle:";
	cin>>bs>>ht;
	cout<<"enter raidus of a circle:";
	cin>>r;
	cout<<"\n area of a triangle is"<<area(bs,ht);
	cout<<"\n area of a circle is"<<area(r);
		
}
float area(float bs,float ht){
	return((bs*ht)/2);
}
float area(float r){
	return(3.14*r*r);
}

