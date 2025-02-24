//single Inheritance 

#include<iostream>
using namespace std;
class A{
   public:
	int a=10;
	int b=20;
	
};

class B:public A{
	int c=30;
	public:
		void display(){
			cout<<"a: "<<a<<endl;
			cout<<"b: "<<b<<endl;
			cout<<"c: "<<c<<endl;
	}
};

int main(){
  B b;
  b.display();
}








