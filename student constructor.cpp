#include<iostream>
using namespace std;
class Student{
	private:    
		int no;
		float h;
    	float w;
	public:
		void getStudentInfo()
		{
			cout<<no<<endl<<h<<endl<<w<<endl;
		}
		void setStudentInfo(int a,float b,float c)
		{
			no=a;
			h=b;
			w=c;
		}
		Student()
		{
			cout<<"default parameter"<<endl;
			no=1;
			h=5.4;
			w=66.00;		
		}
		Student(int x)
		{
			cout<<"with one parameter"<<endl;
			no=x;
			h=x+0.5;
			w=x*11;
			
		}
		Student(int x,int y)
		{
			cout<<"with two parameter"<<endl;
			no=x;
			h=y;
			w=x*y+11;	
		}	
		Student(const Student& obj)
		{
			cout<<" my copy "<<endl;
			no=obj.no;
			h=obj.h;+
			w=obj.w;		
		}
	
};
int main()
{
	Student s1;
	s1.setStudentInfo(5,5.6,60.3);
	s1.getStudentInfo();
	
	Student s2;
	s2.getStudentInfo();
	
	Student s3(5);
	s3.getStudentInfo();
	
	Student s4(5,6);
	s4.getStudentInfo();
	
	Student s5=s4;
	
	s5.getStudentInfo();
	
	Student s6(s3);

	s6.getStudentInfo();
	
}
