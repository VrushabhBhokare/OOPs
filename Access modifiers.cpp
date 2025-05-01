#include<iostream>
#include<string>
using namespace std;

//class Teacher 
class Teacher{
	/*(Access modifiers 
	   1]private=data & method accessible inside class;
	   2]public=data & method accessible to everyone;
	   3]protected=data & method accessible inside class & to its derived class;
	   )
	*/
	private:
		double salary;

	public:
		//properties/attribute
		string name;
		string dept;
		string subj;
		//methods/member function
		void changedept(string newdept){
			dept=newdept;
		}	
		//setter function 
		void setsalary(int s){
			salary=s;
		}
		//getter function
		double getinfo(){
			return salary;
		}
};                            

int main(){
    //object of the Teacher class 
	Teacher t1;               
	t1.name="vrusabh";
	t1.dept="CSE(AIML)";
	t1.subj="OOP's";
	t1.setsalary(250000);
	cout<<t1.getinfo()<<endl;  //printing the salary of the teacher
	return 0;
}
