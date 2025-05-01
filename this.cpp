/* this->

	this is a special pointer in c++ this points to the current object
	this->prop is same as *(this).prop //(*this=object)
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
		//this is ussed (to show object properties)
		Teacher(string name,string dept,string subj,double salary){
			this->name=name;
			this->dept=dept;
			this->subj=subj;
			this->salary=salary;
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
