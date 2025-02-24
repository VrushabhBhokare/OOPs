//Multilevel  Inheritance 
#include<iostream>
using namespace std;
class A{
   public:
	int No_stu_a=60;
	
};

class B:public A{
	public:
	int No_stu_b=40;
	
};

class C:public B{
	int No_stu_c=50;
	public:
	    void display(){
	    	cout<<"strength of each class"<<endl;
			cout<<"A: "<<No_stu_a<<endl;
			cout<<"B: "<<No_stu_b<<endl;
			cout<<"C: "<<No_stu_c<<endl;
	}
		
};

int main(){
  C b;
  b.display();
}
