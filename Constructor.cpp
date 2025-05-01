/*Constructor:-
special method invoked automatically at a time of object creation,used for initalisation
  1)same name as class
  2)doesn't have return rype
  3)only called once (automatically),at object creation
  4)memory allocation happens when constuctor is called(allocate for objects not classes)
  5)always declare as public
  
  Types of constructor
  1)parameterized constructor
  2)Non-parameterized constructor
  3)copy constructor
  (only one constructor run)

  */
#include<iostream>
#include<string>
using namespace std;

//class Teacher 
class Teacher{
	
	private:
		double salary;

	public:
		//Non-parameterized constructor
		Teacher(){
			dept="CSE(AIML)";
			}
		//parameterized constructer
		Teacher(string n,string d,string s,double sal){
			name=n;
			dept=d;
			subj=s;
			salary=sal;
			}
		
		string name;
		string dept;
		string subj;

		void changedept(string newdept){
			dept=newdept;
		}	
		//setter function 
		void setsalary(int s){
			salary=s;
		}
		//getter function
		double getinfo(){
	cout<<name<<endl;  //printing the name of the teacher
	cout<<dept<<endl;  //printing the dept of the teacher
	cout<<subj<<endl;  //printing the subject of the teacher
	cout<<salary<<endl;  //printing the salary of the teacher
		}
};                            

int main(){
    //object of the Teacher class 
	Teacher t1("vrushabh","CSE(AIML)","OOP's",250000);               
	
	cout<<t1.getinfo()<<endl; 
	return 0;
}
